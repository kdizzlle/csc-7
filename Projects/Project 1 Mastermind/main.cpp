/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kelly Williams
 * Purpose: Mastermind Game
 * Created on October 23, 2022, 7:44 PM
 */

#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random function location
#include <ctime>      //Time Library
#include <cmath>      //Math Library
#include <iomanip>    //Format Library
#include <string>

using namespace std;

//function prototypes

//void getGuess(int);
//void testGuess(int);

int main(int argc, char** argv) {

    //string array for all colors
    string allClrs[8] = {"red", "green", "blue", "yellow", "brown", "orange", "black", "white"};
    cout << "Welcome to Mastermind!\n" << "Choose a sequence length: 4, 6, or 8?\n";
    int length = 0;
    cin >> length;
    cout << "Allow duplicates? Y=1 or N=0\n";
    bool dupe;
    cin >> dupe;
    string code[length];
    int almost = 0;
    int correct = 0;
    //call createCode
    srand(static_cast<unsigned int>(time(0)));
    
    if (dupe=1)
    {
        for (int p=0; p<length; p++)
        {
            for (int i=0; i<7;i++)
            {
                int j = rand() % 8;
                string temp = allClrs[j];
                allClrs[j] = allClrs[i];
                allClrs[i] = temp;
            }
            code[p] = allClrs[p];
        }
    }
    
    if (dupe=0)
    {
        for (int i=0; i<7;i++)
            {
                int j = rand() % 8;
                string temp = allClrs[j];
                allClrs[j] = allClrs[i];
                allClrs[i] = temp;
            }
        for (int j=0; j<length; j++)
        {
            code[j] =allClrs[j];
        }
    }
    
    //for testing
        cout << "code to crack: ";
        for (int z=0; z<length; z++)
            cout << code[z];
        cout << endl;
    
    string guess[length];
    int m=1;
    for (int l=0; l<10; l++)
    {
        cout << "Color choices: red, green, blue, yellow, brown, orange, black, white\n"
                << "Enter one color at a time, lowercase:\n";
        for (int n=0; n<length; n++)
        {
            cin >> guess[n];
            if (guess[n] == code[n])
                correct++;
            while (m<length)
            {
                if (guess[n] == code[m])
                    almost++;
                m++;
            }
            //reset almost and correct counters for next guess
            correct = 0;
            almost = 0;
        }
        cout << "\nRight color, right place: " << correct << endl;
        cout << "Right color, wrong place: " << almost << endl;
    }
    
    if (correct == length)
        {
            cout << "\nYou win!" << endl;
            return 0;
        }
    cout << "\nOut of guesses. Better luck next time!" << endl;
    
    return 0;
}


