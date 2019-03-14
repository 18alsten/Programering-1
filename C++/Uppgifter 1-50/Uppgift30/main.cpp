#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	string name;
	char change = 'Z';
	
	cout << "What is your name? ";
	cin >> name;
	
	name[0] = change;
	cout << name;
	return 0;
}
