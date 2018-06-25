#pragma once
#include <iostream>
#include <istream>
#include <cstdio>
#include<iomanip>
#include <string>
#include <fstream>
#include "CDate.h"
using namespace std;

class People
{
protected: 
	string name;
	CDate birthday;
	int code_ID;
public:
	People();
	~People();

	virtual void printInfo(); //pure virtual
	
	string getName();
	CDate getBirthday();
	int getCode_ID();
	
	void setPeople(string, CDate, int);
	void setName(string);
	void setBirthday(CDate);
	void setCode_ID(int);
};
