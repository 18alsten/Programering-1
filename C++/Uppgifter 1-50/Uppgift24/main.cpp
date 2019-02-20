#include <iostream>

using namespace std;

int main() {
	int house_numbers[10];
	
	for(int i = 0; i < 10; i++)
	{
		cout << "Please insert the house number: ";
		cin >> house_numbers[i];
	}
	
	for(int j = 0; j < 10; j++)
	{
		cout << house_numbers[j] << endl;
	}
	
	return 0;
}
