/*
 *  Question6.cpp
 *
 *  Name:           [ enter your name here ]
 *  Department:     [ enter your department here ]
 *  Matric. No:     [ enter matric no. here ]
 *
 *  Body Mass Index (BMI) calculator application that reads
 *  the user’s weight in kilograms and height in meters,
 *  calculates and display the user’s body mass index
 *
 *  Stub file to enable you complete assignment #1 - question #6
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    double weightInKilograms;
    double heightInMeters;
    double BMI;
    
    // display welcome messages to user
    cout << "Welcome - This Body Mass Index (BMI) calculator application that reads\n";
    cout << "the user’s weight in kilograms and height in meters,\n";
    cout << "calculates and display the user’s body mass index\n\n";
    
    // TODO: display information from the Department of Health and Human Services
    cout << "BMI VALUES\n";
    cout << "Underweight: less than 18.5\n";
    cout << "Normal:      between 18.5 and 24.9\n";
    cout << "Overweight:  between 25 ans 29.9\n";
    cout << "Obese:       30 or greater\n";
    
    // TODO: read in values
    cout << "Enter weight (in kg): ";
    cin >> weightInKilograms;
    cout << "Enter height (in meters): ";
    cin >> heightInMeters;
    
    // TODO: calculate BMI
    BMI =  weightInKilograms / (heightInMeters*2);
    
    // display result
    cout << "Your BMI is: " <<BMI <<endl;
	if (BMI < 18.5)
	cout << "You are under-weight." <<endl;
	else
	if ((BMI < 18.5) && (BMI > 24.9))
	cout << "Your weight is in the normal range. =) <<endl ";
	else
	if ((BMI >= 25) && (BMI < 29.9))
	cout << "You are over-weight." <<endl;
	else
	cout << "You are Obese." <<endl;
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return 0;
}
