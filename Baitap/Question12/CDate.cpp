#include "CDate.h"

int CDate::getDay()
{
	return Day;
}

void CDate::setDay(int x)
{
	Day = x;
}

int CDate::getMonth()
{
	return Month;
}

void CDate::setMonth(int x)
{
	Month = x;
}

int CDate::getYear()
{
	return Year;
}

void CDate::setYear(int x)
{
	Year = x;
}

void CDate::outputDate()
{
	cout << Day << " - " << Month << " - " << Year;
}

CDate CDate::inputDate(int x, int y, int z)
{
	Day = x;
	Month = y;
	Year = z;
	return CDate(Day, Month, Year);
}

CDate::CDate(int x, int y, int z)
{
	Day = x;
	Month = y;
	Year = z;
}

CDate::CDate()
{
}


CDate::~CDate()
{
}


