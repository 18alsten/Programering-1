#include <iostream>

using namespace std;

int main() {
	int num1, stop, jump;
	
	while(num1 < 10 or num1 > 20)
	{
	cout << "Please select a number inbetween 10 and 20 ";
	cin >> num1;
	}
	
	cout << "Please select a number to count towards (Has to be under the start number) ";
	cin >> stop;
	
	cout << "Please select the number of jumps inbetween the numbers ";
	cin >> jump;
	
	while(num1 > stop)
	{
		cout << num1 << endl;
		num1 = num1 - jump;
	}
	
	return 0;
}
