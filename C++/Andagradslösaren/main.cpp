#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	float a, b, c, x1, x2, p, q, root, reella_checker, sym, extr_y, imag;
	
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;
	
	p = b/a;
	q = c/a;
	
	root = sqrt(pow(p/2, 2) - q);
	
	x1 = -(p/2) + root;
	x2 = -(p/2) - root;
	
	reella_checker = pow(p/2, 2) - q;
	
	if(reella_checker > 0) {
		cout << "2 reella losningar" << endl;
		cout << x1 << endl;
		cout << x2 << endl;
	} else if(reella_checker == 0) {
		cout << "1 reell losning" << endl;
		cout << x1 << endl;
	} else if(reella_checker < 0) {
		cout << "Andragradslosningen har inga reella losingar utan endast de komplexa rotterna: ";
		imag = sqrt((pow(p/2, 2) -q) * -1);
		cout << -(p/2);
		cout << " + " << imag << "i";
		cout << endl;
	}
	
	sym = -(p/2);
	
	
	extr_y = a*pow(sym,2) + b*sym + c;
	
	cout << "Funktionen har symetrilinjen: " << sym << " och extrempunkten " << sym << "," << extr_y;
	
	if(a < 0) {
		cout << " som ar en maximipunkt";
	} else if(a >= 0) {
		cout << " som ar en minimipunkt";
	}
	
	
	return 0;
}
