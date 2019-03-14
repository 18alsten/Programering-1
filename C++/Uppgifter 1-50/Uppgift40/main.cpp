#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	int numb1, max, min;
	
	cout << "Max number: ";
	cin >> max;
	cout << "Min number: ";
	cin >> min;
	
	while(numb1 > max or numb1 < min) {
	numb1 = (rand() % max) + min;
	}
	
	cout << numb1;
	
	return 0;
}
