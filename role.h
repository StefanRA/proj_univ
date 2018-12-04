#pragma once
#include <string>
#include <iostream>
#include <vector>
//#include "studentrole.h"

class role
{
public:
	enum RoleType
	{
		STUDENT_ROLE,
	    TEACHER_ROLE
	};

public:
    role(RoleType);
 
private:
    RoleType mType;
	std::vector<role*> mRoles;
};


