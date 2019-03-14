#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int tal1, tal2;
	int rand();
	srand(time(NULL));
	
	tal1 = (rand() % 10) + 1;
	tal2 = (rand() % 10) + 1;
	
	if(tal1 < tal2) {
		cout << tal1 << endl << tal2;
	} else if(tal2 < tal1) {
		cout << tal2 << endl << tal1;
	} else if(tal1 = tal2) {
		cout << tal1 << endl << tal2;
	}
	
	return 0;
}
