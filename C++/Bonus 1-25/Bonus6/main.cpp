#include <iostream>

using namespace std;

int main() {
	int n, x;
	
	cout << "Chose a number 1-10 ";
	cin >> x;
	
	// Checks so that it only makes 6 lines
	for(int s = 1; s < 6; s++)
	{
	
	// Resets N
	n = 1;
	
	for(int line = 1; line < 10; line++)
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
	if(x > 10)
	{
		cout << "_";
	}
	
	cout << endl;
	
	// MAkes the _ move to the first position after being at the 10th position
	if(x > 10)
	{
		x = 1;
	}
	
	}
	
	return 0;
}
