#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	char function;
	float a = 0, b = 0, found = 0;
	
	cout << "Please input the calculation" << endl;
	cin >> a >> function >> b;
	
	for(int i = 0; found != true; i++)
	{
		if(function == '+')
		{
			cout << a + b;
			found = true;
		} else if(function == '-') {
			cout << a - b;
			found = true;
		} else if(function == '*') {
			cout << a * b;
			found = true;
		} else if(function == '/') {
			cout << a / b;
			found = true;
		} else if(i == 50) {
			cout << "Your calculation was too long or did not include the right function";
			found = true;
		}
	}
	
	return 0;
}
