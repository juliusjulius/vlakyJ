#include "Vlak.h"
#include <iostream>

using namespace std;

Vlak::~Vlak()
{
}

void Vlak::pridajStanicu(Stanica stanica)
{	
	zoznamStanic.push_back(stanica);
}

void Vlak::vypis() {
	for (int i = 0; i < zoznamStanic.size(); i++)
	{
		cout << zoznamStanic.at(i).getMenoStanice()<<endl;
	}
}
