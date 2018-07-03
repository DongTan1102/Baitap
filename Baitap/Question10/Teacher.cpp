#include "Teacher.h"



Teacher::Teacher()
{
}


Teacher::~Teacher()
{
}

void Teacher::printInfo()
{
	Staff::printInfo();
	cout << setw(6) << right << grade << setw(8) << right;
	switch (subJect1)
	{
	case MATHS:
		cout << "Maths";
		break;
	case PHYS:
		cout << "Phys";
		break;
	case ENGLISH:
		cout << "English";
		break;
	default:
		cout << "Unknow";
		break;
	};
	cout << setw(8) << right;
	switch (subJect2)
	{
	case MATHS:
		cout << "Maths";
		break;
	case PHYS:
		cout << "Phys";
		break;
	case ENGLISH:
		cout << "English";
		break;
	default:
		cout << "Unknow";
		break;
	};

	cout << "Class: ";
	cin >> grade;
	int choice;
	do {
		cout << "Subject:" << "0.Maths 1.Phys 2.English : ";
		cin >> choice;
		switch (choice)
		{
		case 0:
			subJect1 = MATHS;
			break;
		case 1:
			subJect1 = PHYS;
			break;
		case 2:
			subJect1 = ENGLISH;
			break;
		default:
			cout << "dont have this choice!" << endl;
			break;
		}
	} while (choice < 0 || choice>2);

	do {
		cout << "Second Subject:" << "0.Maths 1.Phys 2.English : ";
		cin >> choice;
		switch (choice)
		{
		case 0:
			subJect2 = MATHS;
			break;
		case 1:
			subJect2 = PHYS;
			break;
		case 2:
			subJect2 = ENGLISH;
			break;
		default:
			cout << "dont have this choice!" << endl;
			break;
		}
	} while (choice < 0 || choice>3);
}

int Teacher::getGrade()
{
	return grade;
}

subject Teacher::getSubject1()
{
	return subJect1;
}

subject Teacher::getSubject2()
{
	return subJect2;
}

void Teacher::setTeacher(int grade, subject sub1, subject sub2)
{
	this->grade = grade;
	this->subJect1 = sub1;
	this->subJect2 = sub2;
}

void Teacher::setGrade(int grade)
{
	this->grade = grade;
}

void Teacher::setSubject1(subject sub1)
{
	this->subJect1 = sub1;
}

void Teacher::setSubject2(subject sub2)
{
	this->subJect2 = sub2;
}


