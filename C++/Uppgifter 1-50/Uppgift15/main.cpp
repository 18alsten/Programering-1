#include <iostream>

using namespace std;

int main() {
	int tal1;
	cout << "Input a number above 0 ";
	cin >> tal1;
	
	cout << tal1 << endl;	
	
	for(tal1 > 0; tal1--;)
	{	
		cout << tal1 << endl;
	}
	return 0;
}
