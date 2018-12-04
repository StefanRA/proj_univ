#pragma once
#include "person.h"
#include <string>

class student : public Person {

public:
	student();
	~student();
	int NrMatricol;
	int AnStudii;
	std::string FormaFinantare;
private:
	
};

