#pragma once

#include <string>
#include <iostream>
#include "role.h"
#include "grade.h"
#include <vector>

class StudentRole :public Role
{
public:
	StudentRole();
	StudentRole(int IDNumber, int studyYear, int studyGroup, std::string financialForm);
	int getIDNumber();
	int getStudyYear();
	std::string getFinancialForm();
	int getStudyGroup();
	long getGradesSize();
	float getGradeByDiscipline(std::string name);
	void setIDNumber(int IDNumber);
	void setStudieYear(int studyYear);
	void setFinancialForm(std::string financialForm);
	void addGrade(Grade* grade);
	void addGrade(float grade, Discipline* discipline);
	void removeGrade(std::string discipline);
	void updateGrade(float grade, std::string discipline);
	void setStudyGroup(int studyGroup);
	Grade* getGrade(int iterator);
	bool isGradeSet(Discipline* discipline);
private:
	int mIDNumber;
	int mStudyYear;
	std::string mFinancialForm;
	std::vector<Grade*> mGrades;
	int mStudyGroup;
};

