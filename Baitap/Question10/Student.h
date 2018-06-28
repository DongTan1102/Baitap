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
class Student :
	public People
{
private: 
	int grade;
	int number_Project;
	float score_Project[100] = { 4, 5, 9, 10 };
	float avg_Score;
	
	float avg(int);
public:
	Student();
	~Student();

	void printInfo();

	int getGrade();
	int getNumber_Project();
	float getScore_Project();
	float getAvg_Score();

	void setStudent(int, int); //con thieu diem
	void setGrade(int);
	void setNumber_Project(int);
//	void setScore_Project(float*)

};

