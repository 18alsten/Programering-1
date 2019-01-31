#include <iostream>

using namespace std;

int main() {
	int today, lastyear, sum;
	cout << "What is the number today? ";
	cin >> today;
	cout << "What was the number last year? ";
	cin >> lastyear;
	sum = today - lastyear;
	cout << "Total miles driven " << sum << endl;
	
	float fuel, fuelusage;
	
	
	
	cout << "How much fuel does tha car have? ";
	cin >> fuel;
	
	fuelusage = sum / fuel;
	
	cout << "Fuelusage per mile is " << fuelusage;
	
	return 0;
}
