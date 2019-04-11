#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, user, ai = 0;
	char restart = 'Y';
	
	srand(time(0));
	
	while(restart == 'Y') {
	
	// Makes the AI not go over 100 and under 1 in it's first turn and resets it if the game restarts  #For safety
	int ai_mem_max = 100, ai_mem_min = 1;
		
	// Randomises the number
	while(random > 100 or random < 1) {
		random = (rand() % 100) + 1;
	}
	
	
	// How many attempts the user and AI has left
	for(int i = 0; i < 5 and user != random and ai != random; i++) {
		
		// User guesses a number
		cout << "Guess a number inbetween 1-100: ";
		cin >> user;
		
		// Checks if the usser guessed more or less than the number
		if(user == random) {
			cout << "Correct! You win!";
		} else if(user < random) {
			cout << "The hidden number is greater than " << user << endl;
			if(ai_mem_min < user) {
				ai_mem_min = user;
			}
		} else if(user > random) {
			cout << "The hidden number is less than " << user << endl;
			if(ai_mem_max > user) {
				ai_mem_max = user;
			}	
		}
		
		while(ai < ai_mem_min and ai != user or ai > ai_mem_max and ai != user) {
			ai = rand() % (ai_mem_max -1) + (ai_mem_min +1);
		}
		
		
		if(user == random) {
			// Makes the AI stop if the user wins
		} else if(ai == random) {
			cout << "AI wins! The number was: " << random;
			i = 5;
		} else if(ai < random) {
			cout << "AI guessed " << ai << " the hidden number is greater" << endl;
			ai_mem_min = ai;
		} else if(ai > random) {
			cout << "AI guessed " << ai << " the hidden number is lesser" << endl;
			ai_mem_max = ai;
		}
		ai = 0;
	}
	
	restart = 'd';
	while(restart != 'Y' and restart != 'N') {
		cout << endl << "Do you want to play again? Y/N: ";
		cin >> restart;
	}
	}
	
	return 0;
}
