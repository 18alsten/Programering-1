#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	string name, place, do_thing, finding, shout, place_2, finding_2, put_obj, sound, final_doing;
	
	cout << "Enter the name of the human: " << endl;
	cin >> name;
	cout << "Enter a place: (they could be found at #place) " << endl;
	cin >> place;
	cout << "What did they do at this place? " << endl;
	cin >> do_thing;
	cout << "What did they find? " << endl;
	cin >> finding;
	cout << "Shout" << endl;
	cin >> shout;
	cout << "Enter a place: " << endl;
	cin >> place_2;
	cout << "What more did they find? " << endl;
	cin >> finding_2;
	cout << "Where did they place this item? (they put it in their #object) " << endl;
	cin >> put_obj;
	cout << "What sound did they hear? " << endl;
	cin >> sound;
	cout << "What did they do in the end? " << endl;
	cin >> final_doing;
	
	system("cls");
	cout << "Once upon a time there was a human named " << name << ". " << name << " was often found at " << place << " where they would " << do_thing << "." << " But one day something happened, " << name << " was on their way to " << place << " but on their way there they found " << finding << ", " << name << " could not believe that they were so lucky to find " << finding << ". " << name << " shouted " << shout << "! After that " << name << " went to " << place_2 << " Before they could even get halfway they found a " << finding_2 << ". " << name << " could not believe they were so lucky as to find a " << finding_2 << " They put in their " << put_obj << " and continued onwards. Once they got to " << place << " they heard " << sound << " but " << name << " had no idea what the sound was but they didn’t really care anyway because they had finally arrived and were ready to " << final_doing << ".";
	
	
	
	return 0;
}
