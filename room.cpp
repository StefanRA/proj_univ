#include "pch.h"
#include "room.h"
#include <iostream>

Room::Room(std::string name) {
	this->mName = name;
}

void Room::setName(std::string name) {
	this->mName = name;
}

std::string Room::getName() {
	return this->mName;
}
