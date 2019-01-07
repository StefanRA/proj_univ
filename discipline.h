#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "activity.h"

using namespace std;

class Discipline {
public:
	Discipline(std::string name, Activity* activity);
	Discipline(std::string name, std::vector<Activity*> activities);
	~Discipline();
	std::string getName();
	Activity* getActivity(std::string name);
	std::vector<Activity*> getActivities();
	void setName(std::string name);
	void setActivities(std::vector<Activity*> activities);
	void addActivity(Activity* activity);
	void addActivities(std::vector<Activity*> activities);
	void removeActivity(std::string name);
	void addParticipant(Person* person);
	void removeParticipantByCnp(int CNP);
	void removeParticipantByCnp(string CNP);
	void removeByFullName(std::string firstName, std::string lastName);
	long getSizeActivities();
	long getSizeParticipants();
private:
	std::string mName;
	std::vector<Activity*> mActivities;
	std::vector<Person*> mParticipants;
};