#include <iostream>

using namespace std;

int main() {
	int hh1, mm1, ss1, hh2, mm2, ss2, hours, minutes, seconds;
	
	cout << "First lap time (hh mm ss): ";
	cin >> hh1 >> mm1 >> ss1;
	cout << "Second lap time (hh mm ss): ";
	cin >> hh2 >> mm2 >> ss2;
	
	hours = hh1 + hh2;
	minutes = mm1 + mm2;
	seconds = ss1 + ss2;
	
	if(seconds >= 60)
	{
		minutes = minutes + 1;
		seconds = seconds - 60;
	}
	
	if(minutes >= 60)
	{
		hours = hours + 1;
		minutes = minutes - 60;
	}
	
	cout << "Your total time is: " << hours << " " << minutes << " " << seconds;
	
	return 0;
}
