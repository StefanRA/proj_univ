#include "pch.h"
#include "role.h"
#include <iostream>


Role::Role(RoleType type) {
	this->mType = type;
}

Role::RoleType Role::getRole() {
	return this->mType;
}
