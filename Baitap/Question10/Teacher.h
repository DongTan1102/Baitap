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
enum subject { MATHS, PHYS, ENGLISH };

class Teacher :
	public People, Staff
{
private:
	int grade;
	subject subJect1, subJect2;
public:
	Teacher();
	~Teacher();

	void printInfo();

	int getGrade();
	subject getSubject1();
	subject getSubject2();

	void setTeacher(int, subject, subject);
	void setGrade(int);
	void setSubject1(subject);
	void setSubject2(subject);
};

