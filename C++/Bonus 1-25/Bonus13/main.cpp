#include <iostream>

using namespace std;

int main() {
	int array[10], user, n_up, greater_than = 0, less_than = 0, same = 0, greater, less, equal;
	
	for(int i = 0; i < 10; i++)
	{
		cout << "Please input a number: ";
		cin >> user;
		array[i] = user;
	}
	
	for(int n = 0; n < 10; n++)
	{
		n_up = n + 1;
		
		if(array[n_up] > array[n])
		{
			greater_than = true;
		} else if(array[n_up] < array[n]) {
			less_than = true;
		} else {
			same = true;
		}
		
		if(greater_than == true)
		{
			greater++;
		} else if(less_than == true) {
			less++;
		} else {
			equal++;
		}
		
		greater_than = false;
		less_than = false;
		same = false;
	}
	
	if(greater > 0)
	{
		greater_than = true;
	}
	if(less > 0)
	{
		less_than = true;
	}
	if(equal > 0)
	{
		same = true;
	}
	
	
	if(greater_than == true and less_than == true)
	{
		cout << "Både ökande och sjunkande";
	} else if(greater_than == true and less_than == false) {
		cout << "Enbart ökande";
	} else if(greater_than == false and less_than == true) {
		cout << "Enbart sjunkande";
	} else {
		cout << "Ingen förändring";
	}
	return 0;
}
