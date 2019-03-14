#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	string word;
	char change = 'a', broken = 'Z';
	cout << "Enter a word ";
	cin >> word;
	
	int stop = 0; 
	while (word[stop] != '\0')
	{
      stop++;
	}
	
	for(int i = 0; i < stop; i++)
	{
		if(word[i] == 'Z')
		{
			word[i] = 'a';
		}
	}
	
	cout << word;
	
	return 0;
}
