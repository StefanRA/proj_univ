#pragma once

#include <iostream>
#include "role.h"

class TeacherRole :public Role {
public:
	TeacherRole();
	TeacherRole(std::string studies, std::string teacherFunction);
	std::string getStudies();
	std::string getTeacherFunction();
	void setStudies(std::string studies);
	void setTeacherFunction(std::string teacherFunction);
private:
	std::string mStudies;
	std::string mTeacherFunction;
};
