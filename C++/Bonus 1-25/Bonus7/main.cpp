#include <iostream>

using namespace std;

int main() {
	int n, x, userl, userc;
	
	
	cout << "Chose how many lines it should print: ";
	cin >> userl;
	cout << "Chose how many columns there should be: ";
	cin >> userc;
	cout << "Chose a number inbrtween 1 and " << userl << " ";
	cin >> x;
	
	
	// Checks so that it only makes as many lines as the user wants lines
	for(int s = 1; s < userl; s++)
	{
	
	// Resets N
	n = 1;
	
	for(int column = 1; column < userc; column++)
	{
		if(n == x)
		{
			cout << "_";
		}
		cout << "*";
		n++;
	}
	
	// Makes the _ move one step to the right
	x++;
	
	// Puts the _ in the 10th position
	if(x > userc)
	{
		cout << "_";
	}
	
	cout << endl;
	
	// Makes the _ move to the first position after being at the position that the user chose
	if(x > userc)
	{
		x = 1;
	}
	
	}
	
	return 0;
}
