#include "roomrepository.h"
#include "pch.h"

Room* RoomRepository::findByName(std::string name) {
	for (int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->getName() == name)
			return mEntities[i];
	}
	throw std::runtime_error("Eroare! Nu exista o sala cu acest nume!");
}

long RoomRepository::size() {
	return mEntities.size();
}