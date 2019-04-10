#include <iostream>
#include <string>

using namespace std;

struct Boll {
	
	int radie; 
	int vikt;
	string farg;
	
};

Boll Multiplier(Boll user) {
	int radie = user.radie, vikt = user.vikt;
	
	radie = radie * 8;
	vikt = vikt * 2;
	
	Boll copy = { radie, vikt, user.farg };
	
	return copy;
}


int main(int argc, char** argv) {
	
	int user_radie, user_vikt;
	string user_farg;
	
	cout << "Radie, Vikt, Färg" << endl;
	cin >> user_radie >> user_vikt >> user_farg;
	
	Boll user = { user_radie, user_vikt, user_farg };
	
	Boll copy = Multiplier(user);
	
	cout << copy.radie << endl << copy.vikt << endl << copy.farg;
	
	return 0;
}
