#include <iostream>

using namespace std;

int AddFunction(int tal1, int tal2) {
	
	tal1 = tal1 + tal2;
	
	return tal1;
}


int main(int argc, char** argv) {
	int tal1, tal2, summan;
	
	cout << "Skriv in ett tal ";
	cin >> tal1;
	cout << "Skriv in ett till tal ";
	cin >> tal2;
	
	summan = AddFunction(tal1, tal2);
	
	cout << summan;
	
	return 0;
}
