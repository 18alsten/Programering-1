#include <iostream>

using namespace std;

int main() {
	
	int A, B, C;
	
	cout << "A ";
	cin >> A;
	cout << "B ";
	cin >> B;
	
	C = A;
	A = B;
	B = C;
	
	cout << "A " << A << endl;
	cout << "B " << B << endl;
	
	return 0;
}
