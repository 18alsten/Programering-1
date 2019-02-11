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
	
	for(int n = num1; n >= stop; n = n - jump)
	{
		cout << n << endl;
	}
	
	return 0;
}
