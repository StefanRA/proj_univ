
#pragma once

#include <string>
#include <iostream>
#include "role.h"
#include "grade.h"
#include <vector>

class studentrole:public role
{
private:
	std::vector<grade*> mGrades;
	int mStudyGrup;

public:
    studentrole();
};
