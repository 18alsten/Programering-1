#include <iostream>

using namespace std;

int main() {
	float tal1, tal2, check_down, check_up;
	
	cout << "Please input a number " << endl;
	cin >> tal1;
	cout << "Please input a second number: " << endl;
	cin >> tal2;
	
	check_down = tal2 - 10;
	check_up = tal2 + 10;
	
	if(tal1 == tal2)
	{
		cout << "Grattis!";
	} else if(tal1 < tal2 and tal1 >= check_down) {
		cout << "Close but no cigar!";
	} else if(tal1 > tal2 and tal1 <= check_up) {
		cout << "Close but no cigar!";
	} else {
		cout << "Not even close!";
	}
	
	return 0;
}
