#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int b, r;
	
	cout << "Enter the two numbers. \n";
	cin >> b >> r;
	
	if (b % r == 0)
	cout << "First is a multiple of the second. \n";
	else
	cout << "First is not a multiple of the second. \n";
	
	return 0;
}
