#pragma once

#include "repository.h"
#include "room.h"

class RoomRepository : public Repository<Room> {
public:
	Room* findByName(std::string name);
	long size();
};

