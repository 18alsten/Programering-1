#include <iostream>

using namespace std;

int main() {
	
	int f1 = 0, f2 = 1, next = 0, sum;
	
	
	for (int i = 1; i < 20; i++)
    {
        if(i == 1)
        {
            cout << f1 << endl;
        }
        if(i == 2)
        {
            cout << f2 << endl;
        }
        next = f1 + f2;
        f1 = f2;
        f2 = next;
        
        sum = sum + next;
        
        cout << next << endl;
    }
    sum = sum + 1;
    
    cout << endl << "Sum: " << sum;
	
	
	return 0;
}
