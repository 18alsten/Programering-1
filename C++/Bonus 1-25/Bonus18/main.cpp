#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, user, ai = 0;
	char restart = 'Y';
	
	srand(time(0));
	
	while(restart == 'Y') {
		
		
	// Randomises the number
	while(random > 100 or random < 1) {
		random = (rand() % 100) + 1;
	}
	
	
	// How many attempts the user and AI has left
	for(int i = 0; i < 5 and user != random and ai != random; i++) {
		
		cout << "Guess a number inbetween 1-100: ";
		cin >> user;
		
		if(user == random) {
			cout << "Correct! You win!";
		} else if(user < random) {
			cout << "The hidden number is greater than " << user << endl;
		} else if(user > random) {
			cout << "The hidden number is less than " << user << endl;
		}
		
		// AI
		while(ai > 100 or ai < 1) {
			ai = rand() % 100 + 1;
		}
		
		if(user == random) {
			// Makes the AI stop if the user wins
		} else if(ai == random) {
			cout << "AI wins! The number was: " << random;
		} else if(ai < random) {
			cout << "AI guessed " << ai << " the hidden number is greater" << endl;
		} else if(ai > random) {
			cout << "AI guessed " << ai << " the hidden number is lesser" << endl;
		}
		ai = 0;
	}
	
	
	
	cout << "Do you want to play again? Y/N: ";
	cin >> restart;
	}
	
	return 0;
}
