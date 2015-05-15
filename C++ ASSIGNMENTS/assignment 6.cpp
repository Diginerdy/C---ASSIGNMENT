#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int weight;
	int height;
	int BMI;
	cout << "Enter your weight(kg): " <<endl;
	cin >> weight;
	
	cout << "Enter your height(m): " <<endl;
	cin >> height;
	
	BMI = weight / pow(height , 2);
	
	cout << setprecision(2) << fixed << "Your BMI is: " <<BMI <<endl;
	
	if (BMI <= 20.5)
	cout << "You are under-weight." <<endl;
	else
	if ((BMI > 20.5) && (BMI < 25.9))
	cout << "Your weight is in the normal range. =)" <<endl;
	else
	if ((BMI > 26) && (BMI < 35.9))
	cout << "You are over-weight." <<endl;
	else
	cout << "You are Obese." <<endl;

	return 0;	
}
