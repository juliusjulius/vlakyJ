#pragma once
#include "Stanica.h"
#include <vector>;

using namespace std;

class Vlak
{
	int cisloVlaku;
	string nazovStanice;
	string casOdchodu;
	vector<Stanica> zoznamStanic;


public:
	Vlak(int cisloVlaku, string nazovStanice, string casOdchodu) :cisloVlaku(cisloVlaku), nazovStanice(nazovStanice), casOdchodu(casOdchodu) {};
	~Vlak();

	void pridajStanicu(Stanica stanica);

	int getCisloVlaku() { return cisloVlaku; };

	void vypis();
};


