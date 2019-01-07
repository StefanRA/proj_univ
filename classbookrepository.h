#pragma once

#include "repository.h"
#include "classbook.h"

class ClassBookRepository : public Repository<ClassBook> {
public:
	ClassBook* searchByStudyGroupAndYear(int studyGroup, std::string year);
	Person* searchByFullNameAndYear(std::string firstName, std::string lastName, std::string year);
	Person* searchByCNPAndYear(int, std::string);
	Person* searchByEmailAndYear(std::string, std::string);
};
