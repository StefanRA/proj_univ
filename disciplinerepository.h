#pragma once

#include "repository.h"
#include "discipline.h"

class DisciplineRepository : public Repository<Discipline> {
public:
	Discipline* searchByName(std::string);
};