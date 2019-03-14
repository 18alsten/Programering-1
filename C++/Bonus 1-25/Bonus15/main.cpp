#include <iostream>

using namespace std;

float FunctionFahToCel(float degrees);

float FunctionCelToFah(float degrees);

float FormelVal(char choise, float degrees);

int main(int argc, char** argv) {
	char choise;
	float degrees, celcius, fahrenheit;
	
	while(choise != 'C' and choise != 'F')
	{
	cout  << "Do you know Celcius or Fahrenheit? (C for Celcius or F for fahrenheit)" << endl;
	cin >> choise;
	}
	
	cout << "Input the degrees: ";
	cin >> degrees;
	
	
	cout << FormelVal(choise, degrees);
	return 0;
}



float FormelVal(char choise, float degrees) {
	float result;
	
	if(choise == 'C')
	{
		float FunctionCelToFah(float degees);
	} else if(choise == 'F') {
		FunctionFahToCel(degrees);
	}
	
	if(choise == 'C')
	{
		result = FunctionCelToFah(degrees);
	} else if (choise == 'F') {
		result = FunctionFahToCel(degrees);
	}
	
	return result;
}

// Celsius to Fahrenheit
float FunctionCelToFah(float degrees) {	
	float celcius = degrees, fahrenheit;
	fahrenheit = celcius * 1.8 + 32;
	
	return fahrenheit;
}

// Fahrenheit to Celsius
float FunctionFahToCel(float degrees) {
	float fahrenheit = degrees, celcius;
	celcius = (fahrenheit - 32) * 0.5556;
	
	return celcius;
}
