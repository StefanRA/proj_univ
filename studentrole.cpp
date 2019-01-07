
#include "pch.h"
#include "studentrole.h"
#include <iostream>

StudentRole::StudentRole():Role(Role::STUDENT_ROLE)
{

}

StudentRole::StudentRole(int IDNumber, int studyYear, int studyGroup, std::string financialForm)
	: Role(Role::STUDENT_ROLE) {
	this->mIDNumber = IDNumber;
	this->mStudyYear = studyYear;
	this->mStudyGroup = studyGroup;
	this->mFinancialForm = financialForm;
}

int StudentRole::getIDNumber() {
	return this->mIDNumber;
}

int StudentRole::getStudyYear() {
	return this->mStudyYear;
}

std::string StudentRole::getFinancialForm() {
	return this->mFinancialForm;
}

int StudentRole::getStudyGroup() {
	return this->mStudyGroup;
}

long StudentRole::getGradesSize() {
	return this->mGrades.size();
}

float StudentRole::getGradeByDiscipline(std::string name) {
	std::vector<Grade*>::iterator it;
	for (it = mGrades.begin(); it != mGrades.end(); it++) {
		if ((*it)->getDiscipline() == name)
			return (*it)->getGrade();
	}
	throw std::runtime_error("Discipline could not be found");
}

void StudentRole::setIDNumber(int IDNumber) {
	this->mIDNumber = IDNumber;
}

void StudentRole::setStudieYear(int studyYear) {
	this->mStudyYear = studyYear;
}

void StudentRole::setFinancialForm(std::string financialForm) {
	this->mFinancialForm = financialForm;
}

void StudentRole::addGrade(Grade* grade) {
	mGrades.push_back(grade);
}

void StudentRole::addGrade(float grade, Discipline* discipline) {
	if (isGradeSet(discipline)) {
		updateGrade(grade, discipline->getName());
	}
	else {
		this->mGrades.push_back(new Grade(grade, discipline));
	}
}

void StudentRole::removeGrade(std::string discipline) {
	std::vector<Grade*>::iterator it;
	for (it = mGrades.begin(); it != mGrades.end(); it++) {
		if ((*it)->getDiscipline() == discipline) {
			mGrades.erase(it);
			break;
		}
	}
}

void StudentRole::updateGrade(float mark, std::string discipline) {
	std::vector<Grade*>::iterator it;
	for (it = mGrades.begin(); it != mGrades.end(); it++) {
		if ((*it)->getDiscipline() == discipline) {
			(*it)->setGrade(mark);
			break;
		}
	}
}

void StudentRole::setStudyGroup(int studyGroup) {
	this->mStudyGroup = studyGroup;
}

Grade *StudentRole::getGrade(int iterator) {
	return this->mGrades[iterator];
}

bool StudentRole::isGradeSet(Discipline *discipline) {
	std::vector<Grade*>::iterator it;
	for (it = mGrades.begin(); it != mGrades.end(); it++) {
		if ((*it)->getDiscipline() == discipline->getName()) {
			return true;
		}
	}
	return false;
}
