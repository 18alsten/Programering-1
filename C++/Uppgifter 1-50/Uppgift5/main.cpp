#include <iostream>

using namespace std;

int main() {
	int tal1;
	
	cout << "Input a number ";
	cin >> tal1;
	
	if(tal1 > 45)
	{
	if(tal1 < 63)
		{
		cout << "You win!";
		return 0;
		}
	}
	cout << "You lose";
	return 0;
}
