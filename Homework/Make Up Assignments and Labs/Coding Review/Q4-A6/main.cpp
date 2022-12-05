/* 
 * File:   main.cpp
 * Author: Kelly Williams
 * Created on 9/18/2022 5:52pm
 * Purpose:  Even, Odd Vectors and Array Columns Even, Odd
 * Note:  Check out content of Sample conditions in Hacker Rank
 * Input size of integer array, then array, output columns of Even, Odd
 * Vectors then Even, Odd 2-D Array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &even, vector<int> &odd)
{
    int size, number;
    cout << "Input the number of integers to input." << endl;
    cin >> size;
    cout << "Input each number." << endl;
    for (int i=0; i<size; i++)
    {
        cin >> number;
        if(number%2 == 0)//if number is divisible by 2
            even.push_back(number);//put in even vector
        else
            odd.push_back(number);//put in odd vector
    }
}

void copy(vector<int> even, vector<int> odd,int arr[][COLMAX])
{
    int evenSize = even.size();
    int oddSize = odd.size();
    for(int i=0; i<evenSize; i++)
        arr[i][0] = even[i];
    for(int j=0; j<oddSize; j++)
        arr[j][1] = odd[j];
}

void prntVec(vector<int> even, vector<int> odd,int size)//int n is the format setw(n)
{
    cout << setw(size) << "Vector" << setw(size) << "Even" << setw(size) << "Odd" << endl;
    int i=0;
    while (i<even.size()) // majority
    {
        cout << setw(size*2) << even[i] << setw(size) << odd[i] << endl;
        i++;
    }
    while (i < odd.size()) //for the last bit
    {
        cout << setw(size*3) << odd[i] << endl;
        i++;
    }
    while (i < even.size()) //for the last bit
    {
        cout << setw(size*3) << odd[i] << endl;
        i++;
    }
}

void prntAry(const int arr[][COLMAX],int evenSize,int oddSize,int size)
{
    cout << setw(size) << "Array" << setw(size) << "Even" << setw(size) << "Odd" << endl;
    int i=0;
    int j=0;
    while (i<evenSize) // majority
    {
        cout << setw(size*2) << arr[i][0] << setw(size) << arr[j][1] << endl;
        i++;
        j++;
    }
    while (i < oddSize) //for the last bit
    {
        cout << setw(size*3) << arr[j][1] << endl;
        i++;
        j++;
    }
    while (i < evenSize) //for the last bit
    {
        cout << setw(size*3) << arr[i][0] << endl;
        i++;
        j++;
    }
}

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    
    //Input data and place even in one vector odd in the other
    read(even,odd); 
    
    //Now output the content of the vectors
    //          setw(10)
    prntVec(even,odd,10);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array
    //                              setw(10)
    prntAry(array,even.size(),odd.size(),10);//Same format as even/odd vectors
    
    //Exit
    return 0;
}