#pragma once
#include <string>
#include <iostream>
#include <vector>
//#include "studentrole.h"

class Role
{
public:
	enum RoleType
	{
		STUDENT_ROLE,
	    TEACHER_ROLE
	};

public:
	Role(RoleType);
 
private:
    RoleType mType;
	std::vector<Role*> mRoles;
};


