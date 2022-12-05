/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kelly Williams
 * Purpose: Mastermind Game
 * Created on November 15, 2022, 4:20 PM
 */

#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random function location
#include <ctime>      //Time Library
#include <cmath>      //Math Library
#include <iomanip>    //Format Library
#include <string>
#include <cstdio>

using namespace std;

//function prototypes

//void getGuess(int);
//void testGuess(int);

int main(int argc, char** argv) {

    //string array for all colors
    char numGen[10] = {'0','1','2','3','4','5','6','7','8','9'};
    cout << "Welcome to Mastermind!\n"
            << "[1] Play the Game    or    [2] Test all possible guesses\n";
    int game;
    cin >> game;
    int length = 4;
    char code[length];
    int almost = 0;
    int correct = 0;
    //call createCode
    srand(static_cast<unsigned int>(time(0)));
    
    
    cout << "Allow duplicates? Y=1 or N=0\n";
    bool dupe;
    cin >> dupe;
    
    if (dupe=1)
    {
        for (int p=0; p<length; p++)
        {
            for (int i=0; i<9;i++)
            {
                int j = rand() % 9;
                char temp = numGen[j];
                numGen[j] = numGen[i];
                numGen[i] = temp;
            }
            code[p] = numGen[p];
        }
    }

    if (dupe=0)
    {
        for (int i=0; i<9;i++)
        {
            int j = rand() % 9;
            char temp = numGen[j];
            numGen[j] = numGen[i];
            numGen[i] = temp;
        }
        for (int j=0; j<length; j++)
        {
            code[j] = numGen[j];
        }
    }
        
    if (game==1)
    {
        
        //for testing
        cout << "code to crack: ";
        //for (int z=0; z<length; z++)
        //    cout << code[z];
        cout << code;
        cout << endl;
    
        char guess[length];
        int m=1;
        for (int l=0; l<10; l++)
        {
            cout << "The code to crack is 4 numbers long. Guess a number 0000-9999.\n";
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
                
            }
                cout << "\nRight color, right place: " << correct << endl;
                cout << "Right color, wrong place: " << almost << endl;
                
                if (correct == length)
                {
                    cout << "\nYou win!" << endl;
                    return 0;
                }
                else
                {
                    cout << "\nOut of guesses. Better luck next time!" << endl;
                    return 0;
                }
                
                //reset almost and correct counters for next guess
                correct = 0;
                almost = 0;
        }   
    }
    
    if (game==2)
    {
        //display table header
        cout << setw(5) << "Code  " << setw(6) << "Guess  " << setw(7) << "#right  "
                << setw(22) << "#right in wrong spot  " << setw (4) << "Sum" << endl;
        //fill table
        for (int x=0; x<1000; x++)//x<10000
        {
            char test[length];
            sprintf(test, "%04d", x);
            int p=1;
            for (int t=0; t<length; t++)
            {
                if (test[t] == code[t])
                    correct++;
                while (p<length)
                {
                    if (test[t] == code[p])
                        almost++;
                    p++;
                }
            }
            
            cout << setw(4) << code << "  " << setfill('0') << setw(4) << x << setfill(' ') 
                    << setw(7) << correct << setw(15) << almost << setw (14) 
                    << (almost+correct) << endl;
            almost=0;
            correct=0;
        }
    }
        
    return 0;
}


