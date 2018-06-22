#pragma once
#include <iostream>
#include <cstdio>
#include "People.h"
#include "Staff.h"

using namespace std;

using namespace std;

class Teacher :
	public People, Staff
{
public:
	Teacher();
	~Teacher();
};

