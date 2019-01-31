#include <iostream>

using namespace std;

int main() {
	
	int one, two, five, ten, twenty, fifty, hundred, twohundred, fivehundred, thousand, change, bought, paid;
	
	one = 0;
	two = 0;
	five = 0;
	ten = 0;
	twenty = 0;
	fifty = 0;
	hundred = 0;
	twohundred = 0;
	fivehundred = 0;
	thousand = 0;
	
	
	bought = 200000;
	
	while(bought > 10000)
	{
	cout << "How much did you buy for? ";
	cin >> bought;
	}
	cout << "How much did you pay? ";
	cin >> paid;
	
	if(paid == bought or paid < bought)
	{
		cout << "Your change is 0";
		return 0;
	}
	
	change = paid - bought;
	
	cout << "Total change: " << change << endl;
	
	while(change > 0)
	{
		while(change >= 1000)
		{
			change = change - 1000;
			thousand = thousand + 1;
	 	}
	 	while(change >= 500)
	 	{
	 		change = change - 500;
	 		fivehundred = fivehundred + 1;
		}
		while(change >= 200)
		{
			change = change - 200;
			twohundred = twohundred + 1;
		}
	 	while(change >= 100)
	 	{
	 		change = change - 100;
	 		hundred = hundred + 1;
		}
	 	while(change >= 50)
	 	{
	 		change = change - 50;
	 		fifty = fifty + 1;
		}
		while(change >= 20)
		{
			change = change - 20;
			twenty = twenty + 1;
		}
		while(change >= 10)
		{
			change = change - 10;
			ten = ten + 1;
		}
		while(change >= 5)
		{
			change = change - 5;
			five = five + 1;
		}
		while(change >= 2)
		{
			change = change - 2;
			two = two + 1;
		}
		while(change >= 1)
		{
			change = change - 1;
			one = one + 1;
		}
	}
	
	cout << "Your change is: " << endl;
	if(thousand > 0)
	{
		cout << thousand << " thousand" << endl;
	}
		if(fivehundred > 0)
	{
		cout << fivehundred << " fivehundred" << endl;
	}
		if(twohundred > 0)
	{
		cout << twohundred << " twohundred" << endl;
	}
		if(hundred > 0)
	{
		cout << hundred << " onehundred" << endl;
	}
		if(fifty > 0)
	{
		cout << fifty << " fifty" << endl;
	}
		if(twenty > 0)
	{
		cout << twenty << " twenty" << endl;
	}
		if(ten > 0)
	{
		cout << ten << " ten" << endl;
	}
		if(five > 0)
	{
		cout << five << " five" << endl;
	}
		if(two > 0)
	{
		cout << two << " two" << endl;
	}
		if(one > 0)
	{
		cout << one << " one" << endl;
	}
	
	return 0;
}
