#include "pch.h"
#include "activity.h"
#include <iostream>
#include "activity.h"

Activity::Activity(Room* location, Person* owner, std::string description) {
	this->mLocation = location;
	this->mOwner = owner;
	this->mDescription = description;
}

std::string Activity::getLocation() {
	return this->mLocation->getName();
}

std::string Activity::getOwner() {
	return this->mOwner->getmLastName();
}

std::string Activity::getDescription() {
	return this->mDescription;
}

void Activity::setLocation(Room* room) {
	this->mLocation = room;
}

void Activity::setOwner(Person * owner) {
	this->mOwner = owner;
}

void Activity::setDescription(std::string description) {
	this->mDescription = description;
}