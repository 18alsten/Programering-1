#include <iostream>

using namespace std;

int main() {
	float tal1;
	
	cout << "Please input a number " << endl;
	cin >> tal1;
	
	if(tal1 >= 10 and tal1 < 20)
	{
		cout << "Close but no cigar!";
		return 0;
	}
	if(tal1 <=30 and tal1 > 20)
	{
		cout << "Close but no cigar!";
		return 0;
	}
	if(tal1 == 20)
	{
		cout << "Grattis!";
		return 0;
	}
	cout << "Not even close";
	return 0;
}
