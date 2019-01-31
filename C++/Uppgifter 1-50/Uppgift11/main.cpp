#include <iostream>

using namespace std;

int main() {
	int tal1, tal2;
	cout << "Input a number above 0 ";
	cin >> tal1;
	
	cout << tal1 << endl;	
	
	while(tal1 > 0)
	{
		tal2 = tal1 - 1;
		tal1 = tal2;
		
		cout << tal1 << endl;
	}
	return 0;
}
