#include <iostream>

using namespace std;

Fibonacci(int n) {
	if(n == 0 or n == 1) {
		return(n);
	} else {
		return (Fibonacci(n-1) + Fibonacci(n-2));
	}
	
}

int main(int argc, char** argv) {
	int n = 20;
	
	for(int i = 0; i < n; i++) {
		cout << Fibonacci(i) << endl;
	}
	
	return 0;
}
