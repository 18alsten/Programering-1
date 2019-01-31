#include <iostream>
using namespace std;

int main() {
	int a, number1, number2;
	
	cout << "Input 1 for +, 2 for -, 3 for *, 4 for / ";
	cin >> a;
	cout << "Input first number ";
	cin >> number1;
	cout << "Input second number ";
	cin >> number2;
	
	if(a == 1)
	{
		cout << number1 + number2;
		return 0;
	}
	if(a == 2)
	{
		cout << number1 - number2;
		return 0;
	}
	if(a == 3)
	{
		cout << number1 * number2;
		return 0;
	}
	if(a == 4)
	{
		cout << number1 / number2;
		return 0;
	}
	return 0;
}
