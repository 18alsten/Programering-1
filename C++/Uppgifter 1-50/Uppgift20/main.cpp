#include <iostream>

using namespace std;

int main() {
	int kontroll;
	bool run = true;
	
	while(run == true)
	{
		cout << "Do you want to close the program? 1 = Yes, 2 = No: ";
		cin >> kontroll;
		
		if(kontroll == 1)
		{
			run = false;
		}
	}
	
	return 0;
}
