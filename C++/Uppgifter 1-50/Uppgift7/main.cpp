#include <iostream>

using namespace std;

int main() {
	int year, age, check;
	
	cout << "What is the year? ";
	cin >> year;
	cout << "Input the carmodels creation date ";
	cin >> age;
	
	check = year - 5;
	
	if(age >= check)
	{
		cout << "Chose all risk insurance";
	}
	if(age < check)
	{
		cout << "Chose half insurance";
	}
	
	return 0;
}
