#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float a, b, c;
	cout << "Input the triangls first side ";
	cin >> a;
	cout << "Input the second side ";
	cin >> b;
	
	a = a * a;
	b = b * b;
	c = a + b;
	cout << sqrt(c);
	return 0;}

