#include <iostream>
using namespace std;

int main() {
	float tal1, tal2;
	
	cout << "F�rsta talet ";
	cin >> tal1;
	cout << "Andra talet ";
	cin >> tal2;
	
	tal2 = tal1+tal2;
	
	cout << "Tredje talet ";
	cin >> tal1;
	
	tal2 = tal1+tal2;
	
	cout << "Fj�rde talet ";
	cin >> tal1;
	
	tal2 = tal1+tal2;
	
	cout << "Sista talet ";
	cin >> tal1;
	
	tal2 = tal1+tal2;
	
	cout << tal2/5;
	return 0;
}
