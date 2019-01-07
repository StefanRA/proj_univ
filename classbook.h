#pragma once

#include "person.h"
#include "discipline.h"

class ClassBook {
public:
	ClassBook(int studyGroup, std::string year);
	void addStudent(Person* person);
	void removeByCNP(int CNP);
	void removeByCNP(string CNP);
	void removeByEmail(std::string email);
	void removeByFullName(std::string firstName, std::string lastName);
	Person* searchByLastName(std::string lastName);
	Person* searchByFirstName(std::string firstName);
	Person* searchByFullName(std::string firstName, std::string lastName);
	Person* searchByCNP(int CNP);
	Person* searchByCNP(string CNP);
	Person* searchByEmail(std::string email);
	std::vector<Person*> getClassBook();
	void addGrade(float grade, Discipline* discipline, std::string firstName, std::string lastName);
	void removeGrade(std::string discipline, std::string firstName, std::string lastName);
	void updateGrade(float grade, std::string discipline, std::string firstName, std::string lastName);
	long getSize();
	int getStudyGroup();
	std::string getYear();
private:
	std::string mYear;
	int mStudyGroup;
	std::vector<Person*> mClassBook;

};