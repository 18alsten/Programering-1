#include <iostream>

using namespace std;

int main() {
	int number, n = 1, stop = 10;
	int space = 10;
	
	
	for(int x = 1; x <= 10; x++)
	{
		
	while(n <= stop)
	{
		
		while(space > stop and space <= 10)
		{
			cout << " ";
			space--;
		}
		cout << number << " ";
		number++;
		n++;
	}
	cout << endl;
	number = 0;
	n = 1;
	space = 10;
	stop--;
	}
	
	return 0;
}
