/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kelly Williams
 *
 * Created on September 13, 2022, 3:44 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

/*
 * 
 */

//global constants
int check; //check digit

//Function Prototypes
char rndDgit();           //Randomly generates digit characters
void prpLuhn(char[],int); //Prepares the Luhn Sequence
int  cnvrt(char);         //Convert 1 digit char to integer
char cnvrt(int);          //Convert 1 digit integer to a char
void output(char[],int);  //Output the sequence as integers
//Function you are to create
void Luhn(char[],int);    //Calculate and append the Luhn Digit

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Set the Credit Card size
    const int SIZE=17;//One larger than needed for the null terminator
    char crdCard[SIZE];
    //Prepare for Luhn encoding
    cout<<"A random number created in Prep for Luhn Digit"<<endl;
    prpLuhn(crdCard,SIZE-2);
    
    //Output the preLuhn credit card
    cout<<crdCard<<endl;
    output(crdCard,SIZE-2);
    
    //Now create a function that fills the last digit
    //using the Luhn Algorithm
    Luhn(crdCard,SIZE);
    cout<<"The random number with Luhn Encoding, Output Here!"<<endl;
    cout<<"Credit Card with parity number: \n"<<crdCard<<check<<endl;
    
    //Exit Stage Right
    return 0;
}

void Luhn(char ccc[],int n){
    int even=0; //variable for even sum
    int odd=0; //variable for odd sum
    int sum; //total sum of even and odd
    int multSum; //sum after multiplied by 9
    int prod; //variable for product
    
    for (int i=0; i<n-2; i++) //counter loop
    {
        
        int num = ccc[i]-'0'; //assign array value to number
        
        if(i % 2 == 1) //if the number is an even placement
        {
            prod = num * 2;//double the number
            if (prod > 9) //if product is greater than 9
            {
            prod = prod % 9; //mod 9 to sum digits
                if (prod == 0) //18 mod 9 returns 0
                {
                    prod = 9; //it should return 9
                }
            }
            even = even + prod; //add product to even sum 
        }
        else //for odd placed numbers
        {
            odd = odd + num; //add number to odd sum
        }
    }
    
    sum = even + odd; //add even and odd sums together
    multSum = sum * 9; //multiply sum by 9
    
    check = multSum % 10; //mod 10 to get last digit
}

void output(char cc[],int n){
    cout<<"The char array output as each integer digit"<<endl;
    for(int i=0;i<n;i++){
        cout<<cnvrt(cc[i]);
    }
    cout<<endl;
}

char  cnvrt(int digit){
    if(digit<0||digit>9){
        cout<<"You don't know what you are doing"<<endl;
        exit(0);
    }
    return digit+'0';
    //return digit+48;
}

int  cnvrt(char digit){
    if(digit<'0'||digit>'9'){
        cout<<"You don't know what you are doing"<<endl;
        exit(0);
    }
    return digit-'0';
}

void prpLuhn(char cc[],int n){
    //Create a random cc in prep for Luhn checksum
    for(int i=0;i<n;i++){
        cc[i]=rndDgit();
    }
    //Put null terminator at the end
    for(int i=n;i<=n+1;i++){
        cc[i]='\0';
    }
}

char rndDgit(){
    return rand()%10+'0';//Ascii Code for numbers '0'=48 and '9'=57
    //return rand()%10+48;//Ascii Code for numbers '0'=48 and '9'=57
    //mod 10 to get 0-9 output plus 0 character
}
