/*
 *  Question4.cpp
 *
 *  Name:           [ Effiong Uduak-obong Emem ]
 *  Department:     [ Mathematics ]
 *  Matric. No:     [ 45299908IJ ]
 *
 *  Program that inputs a five-digit integer,
 *  separates the integer into its digits and prints them separated by three spaces each
 *
 *  Stub file to enable you complete assignment #1 - question #4
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declaration
    int digits;
    int f, g, h, i, j;
    
    // display welcome messages to user
    cout << "Welcome - This program reads a five-digit integer\n";
    cout << "separates the integer into its digits and prints them\n";
    cout << "separated by three spaces each\n\n";
    
    // TODO: Read integer using cin
    cout << "Enter five digit integer value -  ";
    cin >> digits;
    
   
	
	
    
    // check if digit is a five digit integer
     if(digits < 10000)
	{
		cout << " Restructured to ";
    
        cout << "\nERROR - Please enter a five digit integer";
    } else {
        // TODO: Separate the integer into its digits and prints them separated by three spaces each
        if(digits > 9999)
	
		cout << "Restructured to ";
	
	f = digits/10000;
	g = (digits/1000)%10;
	h = (digits/100)%10;
	i = (digits/10)%10;
	j = digits%10;
	
	cout << f;
	cout << " " << g;
	cout << " " << h;
	cout << " " << i;
	cout << " " << j;
    
    }
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return 0;
}
