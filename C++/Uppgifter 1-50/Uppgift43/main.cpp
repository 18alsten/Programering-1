#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, user;
	char restart = 'Y';
	
	srand(time(0));
	
	while(restart == 'Y') {
	// Randomises the number
	while(random > 100 or random < 1) {
	random = (rand() % 100) + 1;
	}
	
	
	// How many attempts the user has left
	for(int i = 0; i < 5; i++) {
		
		cout << "Guess a number inbetween 1-100: ";
		cin >> user;
		
		if(user == random) {
			cout << "Correct! You win!";
		} else if(user < random) {
			cout << "The hidden number is greater than " << user << endl;
		} else if(user > random) {
			cout << "The hidden number is less than " << user << endl;
		}
	}
	
	cout << "Do you want to play again? Y/N: ";
	cin >> restart;
	}
	
	return 0;
}
