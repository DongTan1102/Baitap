#include "Staff.h"



Staff::Staff()
{
}


Staff::~Staff()
{
}

void Staff::printInfo()
{
	cout << " _____________________________________________________________________________________" << endl;
	cout << "| Code ID |       Name        |    Birthday   | Deparment ID |   Joined Date  | Level |" << endl;
	cout << "|_________|___________________|_______________|______________|________________|_______|" << endl;
	cout << "|" << setw(4) << code_ID << "     |" << setw(16) << name << "   |" << setw(1);
	birthday.outputDate();
	cout << " |" << setw(8) << department_ID << "      |" << setw(3);
	joinedDate.outputDate();
	cout << "  |" << setw(4) << level << "   |" << endl;
	cout << "|_________|___________________|_______________|______________|________________|_______|" << endl;
}

int Staff::getDepartment_ID()
{
	return department_ID;
}

CDate Staff::getJoinedDate()
{
	return joinedDate;
}

int Staff::getLevel()
{
	return level;
}

void Staff::setStaff(int department_ID, CDate joinedDate, int level)
{
	this->department_ID = department_ID;
	this->joinedDate.setDay(joinedDate.getDay());
	this->joinedDate.setMonth(joinedDate.getMonth());
	this->joinedDate.setYear(joinedDate.getYear());
	this->level = level;
}

void Staff::setDeparment_ID(int department_ID)
{
	this->department_ID = department_ID;
}

void Staff::setJoinedDate(CDate)
{
	this->joinedDate.setDay(joinedDate.getDay());
	this->joinedDate.setMonth(joinedDate.getMonth());
	this->joinedDate.setYear(joinedDate.getYear());
}

void Staff::getLevel(int)
{
	this->level = level;
}
