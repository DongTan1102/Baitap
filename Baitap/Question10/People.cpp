#include "People.h"

People::People()
{
}


People::~People()
{
}



void People::printInfo()
{
	cout << " _____________________________________________" << endl;
	cout << "| Code ID |       Name        |    Birthday   |" << endl;
	cout << "|_________|___________________|_______________|" << endl;
	cout << "|" << setw(4) << code_ID << "     |" << setw(16) << name << "   |" << setw(1);
	birthday.outputDate();	
	cout << "  |" << endl;
	cout << "|_________|___________________|_______________|" << endl;
}

string People::getName()
{
	return name;
}

CDate People::getBirthday()
{
	return birthday;
}

int People::getCode_ID()
{
	return code_ID;
}

void People::setPeople(string name, CDate birthday, int code_ID)
{
	this->name = name;
	this->birthday.setDay(birthday.getDay());
	this->birthday.setMonth(birthday.getMonth());
	this->birthday.setYear(birthday.getYear());
	this->code_ID = code_ID;
}

void People::setName(string name)
{
	this->name = name;
}

void People::setBirthday(CDate birthday)
{
	this->birthday.setDay(birthday.getDay());
	this->birthday.setMonth(birthday.getMonth());
	this->birthday.setYear(birthday.getYear());
}

void People::setCode_ID(int code_ID)
{
	this->code_ID = code_ID;
}
