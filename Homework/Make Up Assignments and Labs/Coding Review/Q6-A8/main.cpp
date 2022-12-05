/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kelly
 * Purpose: search an array for a value
 * Created on September 18, 2022, 9:05 PM
 */

//System Libraries Here
#include <cstdlib>
#include <iostream>//cin,cout,getline()
#include <cstring> //strlen()
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//PI, e, Gravity, or conversions

//Function Prototypes Begins Here
//srch1 utility function Input->start position, Output->position found or not
//srch1 is a simple linear search function, repeat in srchAll till all found
//srch1 Input->sentence, pattern, start position Output-> position found
//Remember arrays start at index/position 0
//srchAll Input->sentence, pattern Output->position array
int  srch1(const char [],const char [],int);//Search for 1 occurrence
void srchAll(const string,const string,int []);//Search for all occurrences
void print(const char []);//Print the character arrays
void print(const int []); //Print the array of indexes where the pattern found

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int LINE=81;               //Size of sentence or pattern to find
    string sntnce,pattern; //80 + null terminator
    int match[LINE];                 //Index array where pattern was found
    
    //Input a sentence and a pattern to match
    cout<<"Match a pattern in a sentence."<<endl;
    cout<<"Input a sentence"<<endl;
    getline(cin,sntnce);
    cout<<"Input a pattern."<<endl;
    getline(cin,pattern);
    
    //Search for the pattern
    //Input the sentence and pattern, Output the matching positions
    //Remember, indexing starts at 0 for arrays.
    srchAll(sntnce,pattern,match);
    
    //Display the inputs and the Outputs
    cout<<endl<<"The sentence and the pattern"<<endl;
    cout << sntnce << endl;
    cout << pattern << endl;
    cout<<"The positions where the pattern matched"<<endl;
    print(match);
    
    //Exit
    return 0;
}


void srchAll(const string sntnce,const string pattern,int match[])
{
    
    int pos=0;
    
    for (int i=0; i < sntnce.length() - pattern.length() + 1); i++)
    {
        if(sntence.substr (i, lenP) == pattern)
        {
            
        }
    }
}

void print(const char str[])
{
    for (int i=0; str[i] != ' '; i++)
        cout << str[i];
    cout << endl;
}

void print(const int match[])
{
    if(match[0] == -1)
    {
        cout << " None" << endl;
        return;
    }
    
    cout << endl;
    for (int i=0; match[i] != -1; i++)
    {
        cout << "Pattern found at index " << match[i]+1 << endl;
    }
}