#include <iostream>

using namespace std;

float PrimeFind(float number) {
	
}

int main(int argc, char** argv) {
	float user = 1000001;
	while(user > 1000000) {
		cout << "Input a natural number (Not -) and it has to be under 1 000 000" << endl;
		cin >> user;
	}
	
	cout << PrimeFind(user);
	return 0;
}
