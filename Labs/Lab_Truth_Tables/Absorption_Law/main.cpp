/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 2790755
 *
 * Created on September 13, 2022, 3:08 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //establish p and q as bool values
    bool p;
    bool q;
    //title of table
    cout << "Truth Table for Absorption Law 1: p||(p&&q) = p\n";
    //set values for p and q
    p = true;
    q = true;
    //header of table
    cout << "p\t" << "q\t" << "(p&&q)\t" << "p||(p&&q)" << endl;
    //first row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p&&q)? 'T' : 'F') << "\t    " << (p||(p&&q)? 'T' : 'F') << endl;
    //p stays the same, q changes
    q = false;
    //second row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p&&q)? 'T' : 'F') << "\t    " << (p||(p&&q)? 'T' : 'F') << endl;
    //reset p and q
    p = false;
    q = true;
    //third row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p&&q)? 'T' : 'F') << "\t    " << (p||(p&&q)? 'T' : 'F') << endl;
    //p stays the same, q changes
    q = false;
    //fourth row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p&&q)? 'T' : 'F') << "\t    " << (p||(p&&q)? 'T' : 'F') << endl;
    
    //set up 2nd table
    cout << "\nTruth Table for Absorption Law 2: p&&(p||q) = p\n";
    //set values for p and q
    p = true;
    q = true;
    //header of table
    cout << "p\t" << "q\t" << "(p||q)\t" << "p&&(p||q)" << endl;
    //first row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p||q)? 'T' : 'F') << "\t    " << (p&&(p||q)? 'T' : 'F') << endl;
    //p stays the same, q changes
    q = false;
    //second row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p||q)? 'T' : 'F') << "\t    " << (p&&(p||q)? 'T' : 'F') << endl;
    //reset values for p and q
    p = false;
    q = true;
    //third row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p||q)? 'T' : 'F') << "\t    " << (p&&(p||q)? 'T' : 'F') << endl;
    //p stays the same, q changes
    q = false;
    //fourth row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p||q)? 'T' : 'F') << "\t    " << (p&&(p||q)? 'T' : 'F') << endl;
    return 0;
}

