#include "pch.h"
#include "activity.h"
#include "room.h"
#include "role.h"
#include "teacher.h"
#include "student.h"
#include "person.h"
#include "studentrole.h"
#include "teacherrole.h"
#include "personrepository.h"
#include "roomrepository.h"
#include "activityrepository.h"
#include "classbook.h"
#include "menu.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<Room*> rooms;
    std::vector<Person*> persons;
    std::vector<Activity*> activities;

	Teacher T;
	std::cin>>T;
	std::cout<<T;
	Student s;
	std::cin>>s;
	std::cout<<s;
	int n;
	std::vector<Person*> v;

	rooms.push_back(new Room("A3"));
	persons.push_back(new Person("Andrei"));
	activities.push_back(new Activity(rooms[0], persons[0]));
	persons[0]->addRole(new StudentRole());

	std::cout << "Introduceti numarul de persoane: ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		Teacher *t = new Teacher;
		std::cin >> *t;
		v.push_back(t);
	}

	return 0;
}
