/*
 *  Question2.cpp
 *
 *  Name:           [ Effiong Uduak-obong Emem  ]
 *  Department:     [ Mathematics ]
 *  Matric. No:     [ 45299908IJ ]
 *
 *  Program that reads two integers and determines
 *  if first is a multiple of second
 *
 *  Stub file to enable you complete assignment #1 - question #2
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    int firstInteger;
    int secondInteger;
    
    // display welcome messages to user
    cout << "Welcome - This program reads two integers\n";
    cout << "and determines if first is a multiple of second\n\n";
    
    // Read first integer
    cout << "Enter first integer value -  ";
    cin >> firstInteger;
    
    // Read second integer
    cout << "Enter second integer value -  ";
    cin >> secondInteger;
    
    // Determine if first is a multiple of second
    if (firstInteger % secondInteger == 0)
    cout << "First is a multiple of the second. \n";
	else
	cout << "First is not a multiple of the second. \n";
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return 0;
}
