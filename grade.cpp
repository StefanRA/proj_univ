#include "grade.h"
#include "pch.h"

Grade::Grade(float grade, Discipline* discipline) {
	this->mGrade = grade;
	this->mDiscipline = discipline;
}

std::string Grade::getDiscipline() {
	return this->mDiscipline->getName();
}

float Grade::getGrade() {
	return this->mGrade;
}

void Grade::setDiscipline(Discipline * discipline) {
	this->mDiscipline = discipline;
}

void Grade::setGrade(float grade) {
	this->mGrade = grade;
}