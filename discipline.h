#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "activity.h"

class discipline {

public:
	discipline();

private:
	std::string mName;
	std::vector<activity*> mAct;


};