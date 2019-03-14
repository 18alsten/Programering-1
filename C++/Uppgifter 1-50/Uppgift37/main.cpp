#include <iostream>

using namespace std;

float CalculatorFunction(float a, float b, float found, char function, float result) {
	
	cout << "Please input the calculation" << endl;
	cin >> a >> function >> b;
	
	for(int i = 0; found != true; i++)
	{
		if(function == '+')
		{
			result = a + b;
			found = true;
		} else if(function == '-') {
			result = a - b;
			found = true;
		} else if(function == '*') {
			result = a * b;
			found = true;
		} else if(function == '/') {
			result = a / b;
			found = true;
		} else if(i == 50) {
			cout << "Your calculation was too long or did not include the right function" << endl;
			found = true;
		}
	}
		
	return result;
}



int main(int argc, char** argv) {
	char function;
	float a = 0, b = 0, found, result;
	
	result = CalculatorFunction(a, b, found, function, result);
	
	cout << result;
	
	return 0;
}
