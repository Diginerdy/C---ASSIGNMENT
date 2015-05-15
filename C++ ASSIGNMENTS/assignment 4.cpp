#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int fivedigit;
	int f, g, h, i, j;
	
	cout << "enter the five digit integer: ";
	cin >> fivedigit;
	
	if(fivedigit < 10000)
	{
		cout << " Restructured to ";
	}
	
	if(fivedigit > 9999)
	{
		cout << "Restructured to ";
	}
	
	f = fivedigit/10000;
	g = (fivedigit/1000)%10;
	h = (fivedigit/100)%10;
	i = (fivedigit/10)%10;
	j = fivedigit%10;
	
	cout << f;
	cout << " " << g;
	cout << " " << h;
	cout << " " << i;
	cout << " " << j;
	
	return 0;
}
