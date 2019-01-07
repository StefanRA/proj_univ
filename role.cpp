#include "pch.h"
#include "role.h"
#include <iostream>

#include "role.h"

Role::Role(RoleType type) {
	this->mType = type;
}

Role::RoleType Role::getRole() {
	return this->mType;
}
