#include <iostream>

using namespace std;

int main() {
	int numbers[5], correct[5], is_same;
	correct[0] = 1;
	correct[1] = 2;
	correct[2] = 3;
	correct[3] = 4;
	correct[4] = 5;
	
	for(int insert_numbers = 0; insert_numbers < 5; insert_numbers++)
	{
	cout << "Please insert a number: ";
	cin >> numbers[insert_numbers];
	}
	
	for(int i = 0; i < 5; i++)
	{
		if(numbers[i] == correct[i])
		{
			is_same = true;
		} else {
			is_same = false;
		}
	}
	
	if(is_same == true)
	{
		cout << "You win!";
	}
	
	return 0;
}
