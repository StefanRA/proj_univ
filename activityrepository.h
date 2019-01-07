#pragma once

#include "repository.h"
#include "activity.h"
#include <vector>

class ActivityRepository : public Repository<Activity> {
public:
	Activity* findByLocation(std::string locationName);
	Activity* findByDescription(std::string description);
	std::vector<Activity*> searchByOwner(std::string ownerName);
};
