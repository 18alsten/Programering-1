#include <iostream>

using namespace std;

void WhileMax(int number) {
	int user_number = number + 1;
	
	while(user_number > number) {
		cout << "Input a number lower or equal to " << number << ": ";
		cin >> user_number;
	}
	
}


int main(int argc, char** argv) {
	int number = 9;
	
	// More flexible than just using Function(9)
	WhileMax(number);
	
	
	return 0;
}
