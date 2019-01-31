#include <iostream>

using namespace std;

int main() {
	int num1, check, sum;
	
	num1 = 100;
	
	while(num1 < 0 or num1 > 12)
	{
		cout << "Please input a positive number inbetween 1 and 12 " << endl;
		cin >> num1;
	}
	
	check = 0;
	
	while(check <= 12)
	{
		sum = num1 * check;
		cout << check << " x " << num1 << " = " << sum << endl;
		
		check = check + 1;
	}
	return 0;
}
