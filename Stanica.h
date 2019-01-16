#pragma once
#include <string>

using namespace std;

class Stanica
{
	string nazovStanice;
public:
	Stanica(string nazovStanice) :nazovStanice(nazovStanice){};
	~Stanica();
	string getMenoStanice() { return nazovStanice; };
};

