#pragma once

template<class Entity>
class repository
{
public: 
	add(Entity* Entity);
		remove();
protected:
	std::vector<Entity*> mEntities;
};