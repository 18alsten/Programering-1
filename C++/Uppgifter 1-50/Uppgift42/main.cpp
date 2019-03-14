#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, user;
	srand(time(0));
	
	
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
			return 0;
		} else if(user < random) {
			cout << "The hidden number is greater than " << user << endl;
		} else if(user > random) {
			cout << "The hidden number is less than " << user << endl;
		}
	}
	
	cout << "You didn't guess the number :(";
	
	return 0;
}
