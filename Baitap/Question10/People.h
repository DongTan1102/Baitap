#pragma once
#include <iostream>
#include <cstdio>
using namespace std;

class People
{
protected: 
	char *name;
	struct Date birthday;
	int code_ID;
public:
	People();
	~People();

public:
	virtual void printInfo(); //pure virtual
	char getName();
	Date getBirthday();
	int getCode_ID();
	void setPeople(char*, Date, int);
	void setName(char*);
	void setBirthday(Date);
	void setCode_ID(int);
};

struct Date
{
	int day;
	int month;
	int year;

	// Default constructor:
	Date()
	{
		month = 0;
		day = 0;
		year = 0;
	}
	// Constructor:
	Date(int month_, int day_, int year_)
	{
		month = month_;
		day = day_;
		year = year_;
	}
};