
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kelly Williams
 * Purpose: Lab Bloom Filter
 * Created on November 23, 2022, 3:49 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <vector>

#include "GeneralHashFunctions.h"

using namespace std;

//function prototypes
void part1();
//void part2();

int main(int argc, char** argv) {

    int choice;
    do
    {
        cout << "Enter 1 to view part 1, enter 2 to view part 2/n";
        cout << "Enter any other number to exit\n";
        cin >> choice;
        
        if (choice == 1)
            part1();
       // else if (choice == 2)
            //part2();
    }
    while (choice >= 1 && choice <= 2);
    return true;

}

void part1()
{
    int numIn = 0;
    string key;
    vector<bool> bloom(100);
    for (int i=0; i<100; i++)//initialize vector elements to zero
        bloom[i] = false;
    cout << "How many strings do you want to enter?\n";
    cin >> numIn;
    
    for (int i=0; i<numIn; i++)
    {
        cout << "\n Enter string #" << i << ": ";
        cin >> key;
        
        unsigned int hash1 = RSHash(key) % 100;
        unsigned int hash2 = DJBHash(key) % 100;
        
        bloom[hash1] = true;
        bloom[hash2] = true;
    }
    
    /*need a vector v of m bits
     * m is string length?
     * use 2 hashes
     * False Positive -> (1-e^(-km/n))^k where
     * n is the bit vector size
     * k are the number of hashes
     * m are the number of keys used in the hash to fill the vector.
     * */
}
    
    