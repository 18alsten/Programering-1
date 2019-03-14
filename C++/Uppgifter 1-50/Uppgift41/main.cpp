#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int Randomiser(int max, int min) {
	int result;
	srand(time(NULL));
	
	while(result > max or result < min) {
	result = (rand() % max) + min;
	}
	return result;
}

int main(int argc, char** argv) {
	int max, min;
	
	cout << "Max number: ";
	cin >> max;
	cout << "Min number: ";
	cin >> min;
	
	cout << Randomiser(max, min);
	
	return 0;
}
