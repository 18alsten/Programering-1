#include <iostream>

using namespace std;

int main() {
	
	float kg1, kg2, kgpris1, kgpris2, totalt;
	
	cout << "Hur mycket v�ger varan i kg? " << endl;
	cin >> kg1;
	
	cout << "Hur mycket v�ger den andra varan i kg? " << endl;
	cin >> kg2;
	
	cout << "Vad �r kilopriset f�r varan? " << endl;
	cin >> kgpris1;
	
	cout << "Vad �r kilopriset f�r den adra varan? " << endl;
	cin >> kgpris2;
	
	totalt = kg1 * kgpris1 + kg2 * kgpris2 * 1.12;
	cout << "Totala pris ink moms " << totalt;
	
	return 0;
}
