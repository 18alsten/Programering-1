#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int dice_throw[5], number;
	string choise, re_roll;
	
	for(int i = 0; i < 5; i++) {
		dice_throw[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << dice_throw[i];
		cout << endl;
	}
	
	while(choise != "Ja" and choise != "Nej") {
		cout << "Vill du kasta om en tarning? (Ja eller Nej) ";
		cin >> choise;
	}
	
	if(choise == "Ja") {
		cout << "Vilken tarning? (1,2,3,4 eller 5) (Inga blanksteg) ";
		cin >> re_roll;
		
		for(int i = 0; i < 5; i++) {
			if(re_roll[i] == '1') {
				dice_throw[0] = rand() % 6 + 1;
			}
			if(re_roll[i] == '2') {
				dice_throw[1] = rand() % 6 + 1;
			}
			if(re_roll[i] == '3') {
				dice_throw[2] = rand() % 6 + 1;
			}
			if(re_roll[i] == '4') {
				dice_throw[3] = rand() % 6 + 1;
			}
			if(re_roll[i] == '5') {
				dice_throw[4] = rand() % 6 + 1;
			}
		}
		
		
		for(int i = 0; i < 5; i++) {
			cout << dice_throw[i];
			cout << endl;
		}
	}
	
	return 0;
}
