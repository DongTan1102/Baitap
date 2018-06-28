#pragma once
#include <iostream>
using namespace std;

class CDate
{
private:
	int Day, Month, Year;
public:

	int getDay();
	void setDay(int);

	int getMonth();
	void setMonth(int);

	int getYear();
	void setYear(int);

	void outputDate();

	CDate inputDate(int, int, int);

	CDate(int, int, int);

	CDate(void);
	~CDate(void);


};