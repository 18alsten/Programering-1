#include <iostream>

using namespace std;

int main() {
	int array[7], user, ny, position = 10, change, save, save2;
	
	for(int i = 0; i < 7; i++)
	{
		cout << "Insert a number: ";
		cin >> user;
		array[i] = user;
	}
	cout << "Insert a new value: ";
	cin >> ny;
	
	while(position > 6 or position < 0)
	{
	cout << "Chose a position 0-6: ";
	cin >> position;
	}
	
	change = position;
	
	for(int when_is_end = position; when_is_end < 7; when_is_end++)
	{
		save = array[change];
		array[change] = ny;
		change++;
		ny = array[change];
		array[change] = save;
		change++;
	}
	
	for(int i = 0; i < 7; i++)
	{
		cout << array[i] << endl;
	}
	
	return 0;
}
