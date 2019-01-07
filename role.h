#pragma once
#include <string>
#include <iostream>
#include <vector>
//#include "studentrole.h"

class Role {
public:
	enum RoleType {
		STUDENT_ROLE = 1,
		TEACHER_ROLE,
		GUEST_ROLE,
		ADMINISTRATIVE_ROLE
	};
	Role(RoleType type);
	virtual ~Role() {}
	RoleType getRole();
private:
	RoleType mType;
};


