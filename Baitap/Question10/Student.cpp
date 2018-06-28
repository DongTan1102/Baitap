#include "Student.h"
#include <iostream>
#include <istream>
#include <cstdio>
#include<iomanip>
#include <string>


float Student::avg(int number_Project)
{
	float S = 0;
	for (int i = 0; i < number_Project; i++)
	{
		S = S + score_Project[i];
	}
	return avg_Score = S / number_Project;
}

Student::Student()
{
}


Student::~Student()
{
}

void Student::printInfo()
{

	
	cout << " ______________________________________________________________________________________________________" << endl;
	cout << "| Code ID |       Name        |    Birthday   | Grade | Number Project | Score Project | Average Score |" << endl;
	cout << "|_________|___________________|_______________|_______|________________|_______________|_______________|" << endl;
	cout << "|" << setw(4) << code_ID << "     |" << setw(16) << name << "   |" << setw(1);
	birthday.outputDate();
	cout << "   |" << setw(4) << grade << "   |" << setw(9) << number_Project << "       |" << setw(2);
	for (int i = 0; i <  number_Project; i++)
	{
		cout << score_Project[i] << ", ";
	}
	avg(number_Project);
	cout << "           |" << setw(9) << avg_Score << "      |" << endl;
	cout << "|_________|___________________|_______________|_______|________________|_______________|_______________|" << endl;
}

int Student::getGrade()
{
	return grade;
}

int Student::getNumber_Project()
{
	return number_Project;
}

float Student::getScore_Project()
{
	return *score_Project;
}

float Student::getAvg_Score()
{
	return avg_Score;
}

void Student::setStudent(int grade, int number_Project)
{
	this->grade = grade;
	this->number_Project = number_Project;
}

void Student::setGrade(int grade)
{
	this->grade = grade;
}

void Student::setNumber_Project(int number_Project)
{
	this->number_Project = number_Project;
}
