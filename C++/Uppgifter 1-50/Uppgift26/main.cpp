#include <iostream>

using namespace std;

int main() {
	int secret[5], user[5], correct = 0;
	
	secret[0] = 1;
	secret[1] = 5;
	secret[2] = 1;
	secret[3] = 5;
	secret[4] = 1;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "Insert a number: ";
		cin >> user[i];
	}
	
	for(int count = 0; count < 5; count++)
	{
		if(user[count] == secret[count])
		{
			cout << "Correct!" << endl;
			correct++;
		} else {
			cout << "Wrong!" << endl;
		}
	}
	
	if(correct == 5)
	{
		cout << "You win!";
	}
	
	return 0;
}
