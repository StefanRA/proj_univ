#pragma once
#include <string>
#include <iostream>
#include "room.h"
#include "person.h"

class activity{

public:
	activity(room* location, Person* owner);

private:
    room* mLocation;
    Person* mOwner;


};
