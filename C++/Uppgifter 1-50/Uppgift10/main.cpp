#include <iostream>

using namespace std;

int main() {
	int workhours, normalpay, sickpay;
	
	cout << "How many hours have you worked (total)? ";
	cin >> workhours;
	
	normalpay = 160 * 100;
	
	if(workhours < 160)
	{
		cout << "You worked less than 160 hours this month, your salary this month is " << workhours * 100;
	}
	if(workhours > 160 and workhours <= 260)
	{
		cout << "Your salary this month is " << (workhours - 160) * 150 + normalpay;
	}
	if(workhours = 160)
	{
		cout << "Your salary this month is " << normalpay;
	}
	return 0;
}
