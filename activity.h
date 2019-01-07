#pragma once
#include <string>
#include <iostream>
#include "room.h"
#include "person.h"


class Activity {
public:
	Activity() {}
	~Activity();
	Activity(Room* location, Person* owner, std::string description);
	std::string getLocation();
	std::string getOwner();
	std::string getDescription();
	void setLocation(Room* room);
	void setOwner(Person* owner);
	void setDescription(std::string description);
protected:
	Room* mLocation;
	Person* mOwner;
	std::string mDescription;
};