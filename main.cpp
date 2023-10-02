#include<iostream>
using namespace std;

void MonsterGen();

int main() {
	char input;
	while (1) {
		MonsterGen();
		cout << "press any key to continue..." << endl;
		cin >> input;
	}

}

void MonsterGen() {
	int num = rand() % 100;
	if (num < 15) //15% chance of La chupacabra 
		cout << "La Chupacabra appeared!" << endl;
	else if (num < 20) //5% chance of la Llorona 
		cout << "La Llorona appeared!" << endl;
	else if (num < 50) //30% chance of El Sombreron
		cout << "El Sombreron appears!" << endl;
	else if (num < 75)//25% chances of cyclops 
		cout << "Cyclops has appeared!" << endl;
	else
		cout << "nothing appeared." << endl;


}
