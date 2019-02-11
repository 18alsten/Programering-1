#include <iostream>

using namespace std;

int main() {
	int number = 1, n = 1, stop = 1;
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
	number = 1;
	n = 1;
	space = 10;
	stop++;
	}
	
	return 0;
}
