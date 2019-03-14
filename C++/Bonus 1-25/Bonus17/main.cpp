#include <iostream>
#include <math.h>

using namespace std;

float FunctionKateter(float side1, float side2, float side3) {
	float c, a, result;
	
	if(side1 < side2) {
		c = side2;
		a = side1;
	} else if(side2 < side1) {
		c = side1;
		a = side1;
	}
	
	a = a * a;
	c = c * c;
	
	result = c - a;
	result = sqrt(result);
	
	return result;
}


float Pythagoras(string choise, float side1, float side2) {
	float side3, result;
	
	if(choise == "Hypotenusan") {
		
		side1 = side1 * side1;
		side2 = side2 * side2;
		side3 = side1 + side2;
		result = sqrt(side3);
		
	} else if(choise == "Kateter") {
		result = FunctionKateter(side1, side2, side3);
		
	}
	
	
	return result;
}


int main(int argc, char** argv) {
	string choise;
	float known_side_1, known_side_2;
	
	while(choise != "Hypotenusan" and choise != "Kateter") {
	cout << "What side do you want to calculate? (Hypotenusan eller Kateter) ";
	cin >> choise;
	}
	
	cout << "What is the 2 known sides? ";
	cin >> known_side_1;
	cin >> known_side_2;
	
	cout << Pythagoras(choise, known_side_1, known_side_2);
	
	return 0;
}
