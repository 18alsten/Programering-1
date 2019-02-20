#include <iostream>

using namespace std;

int main() {
	int y[10];
	
	for(int i = 0; i < 10; i++)
	{
		y[i] = i + 1;
	}
	
	for(int j = 10; j >= 0; j--)
	{
		cout << y[j] << endl;
	}
	
	
	
	
	return 0;
}
