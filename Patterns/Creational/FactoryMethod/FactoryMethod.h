#pragma once

#include "../../Pattern.h"

class FactoryMethodPattern : public Pattern {
public:
	std::string get_info();
	int run();
};