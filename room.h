#pragma once

#include <iostream>

class Room {
	public:
		Room(std::string name);
		void setName(std::string name);
		std::string getName();
	private:
		std::string mName;
	};



