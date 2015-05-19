/*
 *  Question1.cpp
 *
 *  Name:           [ Effiong Uduak-obong Emem ]
 *  Department:     [ Mathematics ]
 *  Matric. No:     [ 45299908IJ ]
 *
 *  Program that reads an integer and determines
 *  and prints whether it’s odd or even
 *
 *  Stub file to enable you complete assignment #1 - question #1
 */

#include <iostream>
using namespace std;

int main()
{
    // declare variable to hold integer value
    int value;
    
    // display welcome messages to user
    cout << "Welcome - This program reads an integer\n";
    cout << "and determines if it is odd or even\n\n";
    
    // TODO: Enter code to read integer and store in variable value
    cout << "Please enter an integer value-  ";
    cin >> value;
    
    // TODO: Enter code to determine if integer is odd or even
    if (value % 2 == 0)
	cout << "The number is even. \n";
	
	if (value % 2 == 1)
	cout << "The number is odd. \n";
	
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return 0;
}
