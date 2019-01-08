#include "pch.h"
#include "teacherrole.h"
#include <iostream>

TeacherRole::TeacherRole() :Role(Role::TEACHER_ROLE)
{}

TeacherRole::TeacherRole(std::string studies, std::string teacherFunction): Role(Role::TEACHER_ROLE) {
	this->mStudies = studies;
	this->mTeacherFunction = teacherFunction;
}

std::string TeacherRole::getStudies() {
	return this->mStudies;
}

std::string TeacherRole::getTeacherFunction() {
	return this->mTeacherFunction;
}

void TeacherRole::setStudies(std::string studies) {
	this->mStudies = studies;
}

void TeacherRole::setTeacherFunction(std::string teacherFunction) {
	this->mTeacherFunction = teacherFunction;
}



