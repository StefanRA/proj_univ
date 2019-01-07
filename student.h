#pragma once
#include "person.h"
#include <string>

class Student : public Person {

public:
	void citire();
	void afisare();
	int getNrMatricol();
	int getAnStudii();
	string getFormaFinantare();
private:
	int NrMatricol;
	int AnStudii;
	string FormaFinantare;
};

