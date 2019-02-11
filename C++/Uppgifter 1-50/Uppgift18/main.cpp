#include <iostream>

using namespace std;

int main() {
	int stop;
	
	cout << "How many rows? (Remcomended under 15 so it does not fill out the command prompt) ";
	cin >> stop;
	
	for(int n = 1; n <= stop; n++)
	{
		
		cout << "Baa";
		
		for(int baa = 1; baa < n; baa++)
		{
			cout << ", Baa";
		}
		
		cout << endl;
	}
	return 0;
}
