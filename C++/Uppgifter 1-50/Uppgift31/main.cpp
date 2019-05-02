#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	string word;
	char change = 'a', broken = 'Z';
	cout << "Enter a word ";
	cin >> word;
	

/*	while (word[stop] != '\0')
	{
      stop++;
	}
*/	

	for(int i = 0; i < '/0'; i++) /* shorter than the old whith stop variable becuase all the code above is no longer needed */
	{
		if(word[i] == 'Z')
		{
			word[i] = 'a';
		}
	}
	
	cout << word;
	
	return 0;
}
