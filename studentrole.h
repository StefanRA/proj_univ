#pragma once

#include <string>
#include <iostream>
#include "role.h"
#include "grade.h"
#include <vector>

class StudentRole :public Role
{
private:
	std::vector<Grade*> mGrades;
	int mStudyGrup;

public:
	StudentRole();
};
