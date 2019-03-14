#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int same1, same2, same3, same4, same5, same6;
	string word;
	char check1 = 'M', check2 = 'A', check3 = 'T';
	char check4 = 'm', check5 = 'a', check6 = 't';
	
	cout << "Please write a word " << endl;
	getline(cin, word);
	
	int stop = 0;
	while (word[stop] != '\0')
	{
      stop++;
	}
	
	for(int i = 0; i < stop; i++)
	{
		if(word[i] == check1 or word[i] == check4)
		{
			same1 = true;
		}
		if(word[i] == check2 and same1 == true or word[i] == check5 and same1 == true)
		{
			same2 = true;
		}
		if(word[i] == check3 and same2 == true or word[i] == check6 and same2 == true)
		{
			same3 = true;
		}
	}
	
	if(same1 == true and same2 == true and same3 == true)
	{
		cout << "Mat!";
	}
	
	return 0;
}
