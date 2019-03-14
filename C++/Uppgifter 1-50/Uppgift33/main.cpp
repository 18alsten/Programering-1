#include <iostream>

using namespace std;

void IncreaseFunction(int numb1) {
	
	numb1 = numb1 + 2;
	
	cout << numb1;
}

int main(int argc, char** argv) {
	int numb1;
	cout << "Skriv in ett heltal ";
	cin >> numb1;
	
	IncreaseFunction(numb1);
	
	return 0;
}
