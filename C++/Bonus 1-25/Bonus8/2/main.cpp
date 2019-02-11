#include <iostream>

using namespace std;

int main() {
	
	int number, n = 1, stop = 1;
	
	for(int x = 1; x <= 10; x++)
	{
		
	while(n <= stop)
	{
		cout << number << " ";
		number++;
		n++;
	}
	
	cout << endl;
	number = 0;
	n = 1;
	stop++;
	}
	
	return 0;
}
