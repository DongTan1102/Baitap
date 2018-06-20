
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctime>
using namespace std;

enum DaysOfWeek
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

void checkDaysOfWeek(int season)
{
	switch (season)
	{
	case 0:
		cout << "Sun";
		break;
	case 1:
		cout << "Mon";
		break;
	case 2:
		cout << "Tue";
		break;
	case 3:
		cout << "Wed";
		break;
	case 4:
		cout << "Thu";
		break;
	case 5:
		cout << "Fri";
		break;
	case 6:
		cout << "Sat";
		break;
	}
}

struct my_time
{
	int dayofweek;	//0 for Sunday and 6 for Saturday
	int day;			//0 ... 31
	int month;		//0 ... 12
	int year;			//xxxx
}my_time;


int main()
{
	string wday;
	// tra ve date/time hien tai dua tren system hien tai
	time_t baygio = time(0);

	tm *ltm = localtime(&baygio);
	struct my_time thoigian;
//	thoigian.day = NULL;

	thoigian.day = ltm->tm_mday;
	thoigian.dayofweek = 1 + ltm->tm_wday;
	thoigian.month = 1 + ltm->tm_mon;
	thoigian.year = 1900 + ltm->tm_year;
	//
	//cout << "Thu : " << thoigian.dayofweek << endl;
	//cout << "Thu : " << ltm->tm_wday << endl;

	//cout << "Ngay : " << thoigian.day << endl;
	//cout << "Ngay : " << ltm->tm_mday << endl;

	//cout << "Thang : " << thoigian.month << endl;
	//cout << "Thang : " << ltm->tm_mon << endl;

	//cout << "Nam : " << thoigian.year << endl;
	//cout << "Nam : " << ltm->tm_year << endl;


	cout << "Cau truc duoi dang: dow, dd - mm - yyyy: ";
	checkDaysOfWeek(thoigian.dayofweek);
	cout << ", " << thoigian.day << " - " << thoigian.month << " - " << thoigian.year << endl;

	cout << "Cau truc duoi dang: dd / mm / yyyy: ";
	cout << thoigian.day << " / " << thoigian.month << " / " << thoigian.year << endl;

	cout << "Cau truc duoi dang: mm / dd / yyyy: ";
	cout << thoigian.month << " - " << thoigian.day << " - " << thoigian.year << endl;

	cout << "Cau truc duoi dang: dow dd.mm.yy: ";
	checkDaysOfWeek(thoigian.dayofweek);
	cout << " " << thoigian.day << "." << thoigian.month << "." << thoigian.year << endl;
	
	
	//dow, dd - mm - yyyy
	//dd / mm / yyyy
	//mm - dd - yyyy
	//dow dd.mm.yy
	// in ra thoi gian hien tai tren system hien tai

	system("pause");
}
