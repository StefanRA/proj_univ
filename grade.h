#pragma once

#include <string>
#include <iostream>
#include "discipline.h"

class Grade{

public:
	Grade(float grade, Discipline* discipline);
	std::string getDiscipline();
	float getGrade();
	void setDiscipline(Discipline* discipline);
	void setGrade(float grade);
private:
	float mGrade;
	Discipline* mDiscipline;
};
