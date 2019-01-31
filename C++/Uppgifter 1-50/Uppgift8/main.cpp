#include <iostream>

using namespace std;

int main() {
	int year, age, check, check2;
	
	cout << "What is the year? ";
	cin >> year;
	cout << "Input the carmodels creation date ";
	cin >> age;
	
	check = year - 5;
	check2 = year - 25;
	
	if(age >= check)
	{
		cout << "Chose all risk insurance";
	}
	if(age < check and age > check2)
	{
		cout << "Chose half insurance";
	}
	if(age <= check2)
	{
		cout << "Chose Special Insurance";
	}
	return 0;
}
