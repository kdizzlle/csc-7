/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kelly Williams
 *
 * Created on September 13, 2022, 1:06 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    bool p; //name p bool value
    bool q; //name q bool value
    
    cout << boolalpha; //displays true/false for bool values
    
    //title for truth table
    cout << "Truth Table for (p&&q)||~(p||q) = !(p^q)\n";
    //header of table
    cout << "p\t" << "q\t" << "(p&&q)\t" << "~(p||q)\t" << "(p&&q)||~(p||q)\t" << "!(p^q)" <<endl; 
    //p and q values for first row
    p = true;
    q = true;
    //values for first expression, first row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p&&q)? 'T' : 'F') << "\t   " << (!(p||q)? 'T' : 'F') << "\t      "
            << ((p&&q)||!(p||q)? 'T' : 'F') << "\t\t  " << (!(p^q)? 'T' : 'F') << endl;
    //now q is false for 2nd row
    q = false;
    //values for second row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p&&q)? 'T' : 'F') << "\t   " << (!(p||q)? 'T' : 'F') << "\t      "
            << ((p&&q)||!(p||q)? 'T' : 'F') << "\t\t  " << (!(p^q)? 'T' : 'F') << endl;
    //change bool values for p and q for next row
    p = false;
    q = true;
    //third row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p&&q)? 'T' : 'F') << "\t   " << (!(p||q)? 'T' : 'F') << "\t      "
            << ((p&&q)||!(p||q)? 'T' : 'F') << "\t\t  " << (!(p^q)? 'T' : 'F') << endl;
    //bool values for p and q for last row, p stays same
    q = false;
    //last row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p&&q)? 'T' : 'F') << "\t   " << (!(p||q)? 'T' : 'F') << "\t      "
            << ((p&&q)||!(p||q)? 'T' : 'F') << "\t\t  " << (!(p^q)? 'T' : 'F') << endl;
    
    //set up second table
    cout << "\nTruth Table for (p||q)&&~(p&&q) = p^q\n";
    //header of 2nd table
    cout << "p\t" << "q\t" << "(p||q)\t" << "~(p&&q)\t" << "(p||q)&&~(p&&q)\t" << "(p^q)" <<endl; 
    //set values for p and q
    p = true;
    q = true;
    //first row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p||q)? 'T' : 'F') << "\t   " << (!(p&&q)? 'T' : 'F') << "\t      "
            << ((p||q)&&!(p&&q)? 'T' : 'F') << "\t\t  " << ((p&&q)? 'T' : 'F') << endl;
    //p stays the same, q changes
    q = false;
    //second row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p||q)? 'T' : 'F') << "\t   " << (!(p&&q)? 'T' : 'F') << "\t      "
            << ((p||q)&&!(p&&q)? 'T' : 'F') << "\t\t  " << ((p&&q)? 'T' : 'F') << endl;
    //reset p and q
    p = false;
    q = true;
    //third row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p||q)? 'T' : 'F') << "\t   " << (!(p&&q)? 'T' : 'F') << "\t      "
            << ((p||q)&&!(p&&q)? 'T' : 'F') << "\t\t  " << ((p&&q)? 'T' : 'F') << endl;
    //p stays the same, q changes
    q = false;
    //fourth row
    cout << (p? 'T' : 'F') << "\t" << (q? 'T' : 'F') << "\t  " 
            << ((p||q)? 'T' : 'F') << "\t   " << (!(p&&q)? 'T' : 'F') << "\t      "
            << ((p||q)&&!(p&&q)? 'T' : 'F') << "\t\t  " << ((p&&q)? 'T' : 'F') << endl;
    return 0;
}

