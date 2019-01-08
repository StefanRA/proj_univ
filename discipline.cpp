#include "pch.h"
#include "discipline.h"
#include "studentrole.h"
#include <iostream>

Discipline::Discipline(std::string name, Activity* activity) {
	this->mName = name;
	this->mActivities.push_back(activity);
}

Discipline::Discipline(std::string name, std::vector<Activity*> activities) {
	this->mName = name;
	this->mActivities = activities;
}

std::string Discipline::getName() {
	return mName;
}

Activity* Discipline::getActivity(std::string name) {
	for (int i = 0; i < mActivities.size(); i++) {
		if (mActivities[i]->getDescription() == name)
			return mActivities[i];
	}
	throw std::runtime_error("Eroare! Activitatea nu exista!");
}

std::vector<Activity*> Discipline::getActivities() {
	return mActivities;
}

void Discipline::setName(std::string name) {
	this->mName = name;
}

void Discipline::setActivities(std::vector<Activity *> activities) {
	this->mActivities = activities;
}

void Discipline::addActivity(Activity* activity) {
	this->mActivities.push_back(activity);
}

void Discipline::addActivities(std::vector<Activity*> activities) {
	this->mActivities = activities;
}

void Discipline::removeActivity(std::string name) {
	std::vector<Activity*>::iterator it;
	bool valide = false;
	for (it = mActivities.begin(); it != mActivities.end(); it++) {
		if ((*it)->getDescription() == name) {
			mActivities.erase(it);
			valide = true;
			break;
		}
	}
	if (!valide)
		throw std::runtime_error("Eroare! Actvititatea nu exista!");
}

void Discipline::addParticipant(Person* person) {
	this->mParticipants.push_back(person);
	StudentRole* student = NULL;
	try {
		student = dynamic_cast<StudentRole*>(person->displayRole(1));
	}
	catch (std::runtime_error const e) {}
	if (student != NULL)
		student->addGrade(NULL, this);
}

void Discipline::removeParticipantByCnp(string CNP) {
	std::vector<Person*>::iterator it;
	bool valide = false;
	for (it = mParticipants.begin(); it != mParticipants.end(); it++) {
		if ((*it)->getmCNP() == CNP) {
			mParticipants.erase(it);
			valide = true;
			break;
		}
	}
	if (!valide)
		throw std::runtime_error("Eroare! Persoana nu a putut fi gasita");
}

void Discipline::removeByFullName(std::string firstName, std::string lastName) {
	std::vector<Person*>::iterator it;
	bool valide = false;
	for (it = mParticipants.begin(); it != mParticipants.end(); it++) {
		if ((*it)->getmLastName() == lastName && (*it)->getmFirstName() == firstName) {
			mParticipants.erase(it);
			valide = true;
			break;
		}
	}
	if (!valide)
		throw std::runtime_error("Eroare! Persoana nu a putut fi gasita");
}

long Discipline::getSizeActivities() {
	return mActivities.size();
}

long Discipline::getSizeParticipants() {
	return mParticipants.size();
}