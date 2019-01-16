#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "vlak.h"
#include <map>

using namespace std;



int main() {

	int cisloVlaku = 0;
	string nazovStanice;
	string casOdchodu;
	bool neexistuje = true;

	vector<Vlak> zoznamVlakov;
	map<string, int> zoznamVypisanie;


	ifstream file("nazovSuboru.txt");
	
	while (file >> cisloVlaku >> nazovStanice >> casOdchodu) {
		zoznamVypisanie.insert(make_pair("pomocny", 1));
		bool neexistuje = true;
		for (auto &myPair : zoznamVypisanie) {

			if (myPair.first == nazovStanice) {
				myPair.second++;
				neexistuje = false;
				break;
			}
			if(neexistuje) {
				zoznamVypisanie.insert(make_pair(nazovStanice, 1));
				break;
			}
		}

		for (int i = 0; i < zoznamVlakov.size(); i++)
		{


			if (cisloVlaku == zoznamVlakov.at(i).getCisloVlaku()) {
				neexistuje = false;
				zoznamVlakov.at(i).pridajStanicu(nazovStanice);
				break;
			}
		}


		if (neexistuje) {
			Vlak vlak(cisloVlaku, nazovStanice, casOdchodu);
			vlak.pridajStanicu(nazovStanice);
			zoznamVlakov.push_back(vlak);
		}
		
	}



	//////////////////////////////////////////////////////////////////
	ofstream output("outputfile.txt");

	for (auto& s : zoznamVypisanie) {
		output << s.first << ":" << s.second << endl;
	}
	///////////////////////////////////////////////////////////////////////////

	for (int i = 0; i < zoznamVlakov.size(); i++)
	{
		zoznamVlakov.at(i).vypis();
	}

	cout << "pocet picovin v zozname" << endl;
	cout << zoznamVypisanie.size();
}

