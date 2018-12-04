#include "pch.h"
#include <iostream>
#include "course.h"
#include "teacher.h"
#include "student.h"
#include "person.h"
#include "room.h"
#include "activity.h"

int main()
{
    std::vector<room*> rooms;
    std::vector<Person*> persons;
    std::vector<activity*> activities;

	teacher T;
	std::cin>>T;
	std::cout<<T;
	student s;
	std::cin>>s;
	std::cout<<s;

	rooms.push_back(new room("A3"));
	persons.push_back(new Person("Andrei"));
	activities.push_back(new activity(rooms[0], persons[0]));
	persons[0]->addrole(new studentrole());

	return 0;
}
