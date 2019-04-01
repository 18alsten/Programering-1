#include <iostream>

using namespace std;

Multiplier(int number) {
	if(number > 1) {
		number = number * Multiplier(number-1);
	}
	
	return number;
}


int main(int argc, char** argv) {
	int number;
	
	cout << "Input a number: (Anything above 33 is too big) ";
	cin >> number;
	
	cout << Multiplier(number);
	
	return 0;
}
