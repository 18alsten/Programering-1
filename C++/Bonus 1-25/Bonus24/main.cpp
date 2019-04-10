#include <iostream>
// Behövde inte ha funktioner för Sandra
using namespace std;

struct Move {
	
	int x_position;
	int y_position;
	
};

int main(int argc, char** argv) {
	char ball_character = 'O';
	Move ball_xy;
	int user_x, user_y, x_left, y_left;
	bool repeat_forever = true;
	
	// Makes the user able to move the ball more than once
	while(repeat_forever == true) {
	user_x = -1, user_y = -1;
	while(user_x < 0 or user_x > 10 or user_y < 0 or user_y > 10) {
	cout << "Input a new coordinates. X and Y" << endl;
	cin >> user_x >> user_y;
	}
	
	Move user = { user_x, user_y };
	
	// Moves the ball to the right Y coordinate
	for(int y = user.y_position; y <= 10 and y > 0; y--) {
		cout << endl;
	}
	// Moves the ball out to the right X coordinate
	for(int x = user.x_position; x <= 10 and x > 0; x--) {
		cout << " ";
	}
	cout << ball_character;
	
	x_left = 10 - user.x_position;
	y_left = 10 - user.y_position;
	
	while(y_left > 0) {
		cout << endl;
		y_left--;
	}
	while(x_left > 0) {
		cout << " ";
		x_left--;
	}
	
	int clear = 0;
	char clear_yes;
	while(clear != true) {
		cout << endl << "Put in y when you are ready to restart ";
		cin >> clear_yes;
		
		if(clear_yes == 'y') {
			clear = 1;
		} else {
			clear = 0;
		}
	}
	system("cls");
	}
	return 0;
}
