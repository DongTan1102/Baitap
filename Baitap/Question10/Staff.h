#pragma once
#include <iostream>
#include <istream>
#include <cstdio>
#include<iomanip>
#include <string>
#include <fstream>
#include "People.h"
#include "CDate.h"

using namespace std;
class Staff :
	public People
{

protected:
	int department_ID;
	CDate joinedDate;
	int level;
public:
	Staff();
	~Staff();

	virtual void printInfo();
	
	int getDepartment_ID();
	CDate getJoinedDate();
	int getLevel();

	void setStaff(int, CDate, int);
	void setDeparment_ID(int);
	void setJoinedDate(CDate);
	void getLevel(int);
};

