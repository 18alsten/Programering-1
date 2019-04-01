#include <iostream>

using namespace std;

int NumberCalculator(int sum) {
	if(sum != 0) {
		sum = sum + NumberCalculator(sum-1);
	}
	
	return sum;
}

int main(int argc, char** argv) {
	int user_number;
	
	cout << "Input a number: ";
	cin >> user_number;
	
	cout << NumberCalculator(user_number);
	
	return 0;
}
