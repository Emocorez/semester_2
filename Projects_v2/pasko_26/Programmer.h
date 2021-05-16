#pragma once

#include <string>
#include <iostream>
#include "Human.h"

using namespace std;

class Programmer : public Human {
private:
	int chillTime;

public: 

	Programmer()
	{
		chillTime = 0;
	}

	void chillInfo();
};
