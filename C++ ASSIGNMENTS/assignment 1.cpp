#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int m;
	
	cout << "Input a number: \n";
	cin >> m;
	
	if (m % 2 == 0)
	cout << "The number is even. \n";
	if (m % 2 == 1)
	cout << "The number is odd. \n";
	return 0;
}
