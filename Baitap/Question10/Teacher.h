#pragma once
#include <iostream>
#include <istream>
#include <cstdio>
#include<iomanip>
#include <string>
#include <fstream>
#include "CDate.h"
#include "People.h"
#include "Staff.h"

using namespace std;

using namespace std;

class Teacher :
	public People, Staff
{
private:
	int grade;
	//enum subject1 { MATHS, PHYS, ENGLISH };
	//enum subject2 { MATHS, PHYS, ENGLISH };
public:
	Teacher();
	~Teacher();

	void printInfo();

	int getGrade();
	//int getSubject1();
	//int getSubject2();

	void setTeacher(int);
	void setGrade();
};

