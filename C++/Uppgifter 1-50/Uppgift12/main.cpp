#include <iostream>

using namespace std;

// Code = 1111

int main() {
	int code, input, attempts;
	
	attempts = 3;
	
	while(attempts > 0)
	{
		cout << "Vänligen skriv in din pinkod ";
		cin >> input;
		
		if(input == 1111)
		{
			cout << "Grattis, du får nu ta ut dina pengar ";
			return 0;
		}
		if(input != 1111)
		{
			attempts = attempts - 1;
			cout << "Du skrev in fel kod! Du har " << attempts << " försök kvar" << endl;
		}
	}
	
	cout << "Ditt kort är nu spärrat!";	
	return 0;
}
