#include <iostream>

using namespace std;

int main() {
	bool is_10 = false;
	int kontroll;
	
	while(is_10 == false)
	{
	cout << "Please input a number, input 10 to exit: ";
	cin >> kontroll;
	
	if(kontroll == 10)
	{
		is_10 = true;
	}
	else
	{
		cout << "Du skrev inte in 10" << endl;
	}
	}
	
	cout << "Du skrev in 10";
	return 0;
}
