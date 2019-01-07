// stdafx.h
#include <stdio.h>
#include "classbook.h"
#include "studentrole.h"
#include "pch.h"
#include <iostream>
// C2039_g.cpp
// compile with: /clr
//using namespace System;
//using namespace System::Threading;

ClassBook::ClassBook(int studyGroup, std::string year) {
	this->mStudyGroup = studyGroup;
	this->mYear = year;
}

std::vector<Person*>::iterator it;

void ClassBook::addStudent(Person * person) {
	StudentRole* p = dynamic_cast<StudentRole*>(person->displayRole(1));
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmCNP() == person->getmCNP()) {
			throw std::runtime_error("Eroare! Persoana deja exista!");
		}
	}
	if (p->getStudyGroup() != mStudyGroup) {
		throw std::runtime_error("Eroare! Persoana nu este din acest grup!");
	}
	mClassBook.push_back(person);
}

void ClassBook::removeByCNP(std::string CNP) {
	bool valide = false;
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmCNP() == CNP) {
			mClassBook.erase(it);
			valide = true;
			break;
		}
	}
	if (!valide) {
		throw std::runtime_error("Eroare! Persoana nu a fost gasita!");
	}
}

void ClassBook::removeByEmail(std::string email) {
	bool valide = false;
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmEmail() == email) {
			mClassBook.erase(it);
			valide = true;
			break;
		}
	}
	if (!valide) {
		throw std::runtime_error("Eroare! Persoana nu a fost gasita!");
	}
}

void ClassBook::removeByFullName(std::string firstName, std::string lastName) {
	bool valide = false;
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmFirstName() == firstName && (*it)->getmLastName() == lastName) {
			mClassBook.erase(it);
			valide = true;
			break;
		}
	}
	if (!valide) {
		throw std::runtime_error("Eroare! Persoana nu a fost gasita!");
	}
}

Person* ClassBook::searchByLastName(std::string lastName) {
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmLastName() == lastName)
			return *it;
	}
	throw std::runtime_error("Eroare! Persoana nu a fost gasita!");
}

Person* ClassBook::searchByFirstName(std::string firstName) {
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmFirstName() == firstName)
			return *it;

	}
	throw std::runtime_error("Eroare! Persoana nu a fost gasita!");
}

Person* ClassBook::searchByFullName(std::string firstName, std::string lastName) {
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmLastName() == lastName && (*it)->getmFirstName() == firstName)
			return *it;
	}
	throw std::runtime_error("Eroare! Persoana nu a fost gasita!");
}

Person* ClassBook::searchByCNP(string CNP) {
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmCNP() == CNP)
			return *it;
	}
	throw std::runtime_error("Eroare! Persoana nu a fost gasita!");
}

Person* ClassBook::searchByEmail(std::string email) {
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmEmail() == email)
			return *it;
	}
	throw std::runtime_error("Eroare! Persoana nu a fost gasita!");
}

std::vector<Person*> ClassBook::getClassBook() {
	std::vector<Person*> students;
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		students.push_back(*it);
	}
	return students;
}

void ClassBook::addGrade(float mark, Discipline* discipline, std::string firstName, std::string lastName) {
	StudentRole *student = NULL;
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmLastName() == lastName && (*it)->getmFirstName() == firstName) {
			student = dynamic_cast<StudentRole*>((*it)->displayRole(1));
			break;
		}
	}
	student->addGrade(mark, discipline);
}

void ClassBook::removeGrade(std::string discipline, std::string firstName, std::string lastName) {
	StudentRole *student = NULL;
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmLastName() == lastName && (*it)->getmFirstName() == firstName) {
			student = dynamic_cast<StudentRole*>((*it)->displayRole(1));
			break;
		}
	}
	student->removeGrade(discipline);
}

void ClassBook::updateGrade(float mark, std::string discipline, std::string firstName, std::string lastName) {
	StudentRole *student = NULL;
	for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
		if ((*it)->getmLastName() == lastName && (*it)->getmFirstName() == firstName) {
			student = dynamic_cast<StudentRole*>((*it)->displayRole(1));
			break;
		}
	}
	student->updateGrade(mark, discipline);
}