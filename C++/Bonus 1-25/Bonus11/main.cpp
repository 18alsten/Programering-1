#include <iostream>

using namespace std;

int main() {
	int numbers[5], correct[5], is_same;
	
	for(int insert_numbers = 0; insert_numbers < 5; insert_numbers++)
	{
	cout << "Please insert a number: ";
	cin >> numbers[insert_numbers];
	}
	
	for(int i = 0; i < 5; i++)
	{
		for(int test = 0; test < 5; test++)
		{
			if(numbers[i] == numbers[test] and i != test)
			{
			is_same = true;
			
			} else {
				
			is_same = false;
			}
			
			if(is_same == true)
			{
			cout << numbers[i] << " is the same" << endl;
			}
		}
	}
	
	return 0;
}
