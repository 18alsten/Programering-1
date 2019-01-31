#include <iostream>

using namespace std;

int main() {
	int tal1, tal2, tal3;
	
	cout << "Input a number ";
	cin >> tal1;
	cout << "Input another number ";
	cin >> tal2;
	cout << "Input the last number ";
	cin >> tal3;
	
	if(tal1 >= tal2)
	{
		if(tal1 >= tal3)
		{
			cout << tal1;
			return 0;
		}
		cout << tal3;
		return 0;
	}
	
	if(tal2 >= tal3)
	{
		cout << tal2;
		return 0;
	}
	cout << tal3;
	
	return 0;
}
