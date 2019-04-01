#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int dice_throw[5];
	
	for(int i = 0; i < 5; i++) {
		dice_throw[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << dice_throw[i];
		cout << endl;
	}
	return 0;
}
