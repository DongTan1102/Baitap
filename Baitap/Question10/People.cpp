#include "People.h"



People::People()
{
}


People::~People()
{
}



char People::getName()
{
	return *name;
}

Date People::getBirthday()
{
	return birthday();
}

int People::getCode_ID()
{
	return code_ID;
}

void People::setPeople(char *name, Date birthday, int code_ID)
{
	this->name = name;
	this->birthday = birthday;
	this->code_ID = code_ID;
}

void People::setName(char *name)
{
	this->name = name;
}

void People::setBirthday(Date birthday)
{
	this->birthday = birthday;
}

void People::setCode_ID(int code_ID)
{
	this->code_ID = code_ID;
}
