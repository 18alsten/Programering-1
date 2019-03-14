#include <iostream>

using namespace std;

int IncreaseFunction(int numb1) {
	
	numb1 = numb1 + 2;
	
	return numb1;
}

int main(int argc, char** argv) {
	int numb1;
	cout << "Skriv in ett heltal ";
	cin >> numb1;
	
	cout << IncreaseFunction(numb1);
	
	return 0;
}
