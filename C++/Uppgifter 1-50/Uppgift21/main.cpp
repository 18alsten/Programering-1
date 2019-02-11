#include <iostream>

using namespace std;

int main() {
	int num;
	bool increase = true;
	
	while(increase == true)
	{
		cout << num;
		num++;
		
		if(num == 7)
		{
			increase = false;
		}
	}
	while(num >= 0)
	{
		cout << num;
		num--;
	}
	
	
	return 0;
}
