#include <iostream>

using namespace std;

int main() {
	int numbers[7], sum;
	
	for(int i = 0; i < 7; i++)
	{
	cout << "Please enter a number: ";
	cin >> numbers[i];
	}
	
	for(int addition = 0; addition < 7; addition++)
	{
		sum = sum + numbers[addition];
	}
	cout << sum << endl;
	
	if(sum > 50)
	{
		cout << "The sum is greater than 50";
	}
	if(sum < 50)
	{
		cout << "The sum is less than 50";
	}
	if(sum == 50)
	{
		cout << "The sum is 50";
	}
	
	return 0;
}
