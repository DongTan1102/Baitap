//
//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#include <ctime>
//using namespace std;
//
//void checkDaysOfWeek(int);
//
//enum DaysOfWeek
//{
//	SUNDAY,
//	MONDAY,
//	TUESDAY,
//	WEDNESDAY,
//	THURSDAY,
//	FRIDAY,
//	SATURDAY
//};
//
//void checkDaysOfWeek(int season)
//{
//	switch (season)
//	{
//	case 0:
//		cout << "Sun";
//		break;
//	case 1:
//		cout << "Mon";
//		break;
//	case 2:
//		cout << "Tue";
//		break;
//	case 3:
//		cout << "Wed";
//		break;
//	case 4:
//		cout << "Thu";
//		break;
//	case 5:
//		cout << "Fri";
//		break;
//	case 6:
//		cout << "Sat";
//		break;
//	}
//}
//
//struct date
//{
//	int dayofweek;	//0 for Sunday and 6 for Saturday
//	int day;			//0 ... 31
//	int month;		//0 ... 12
//	int year;			//xxxx
//
//	// Default constructor:
//	date() {
//		time_t baygio = time(0);
//
//		tm *ltm = localtime(&baygio);
//
//		dayofweek = ltm->tm_wday;
//		day = ltm->tm_mday;
//		month = 1 + ltm->tm_mon;
//		year = 1900 + ltm->tm_year;
//
//		cout << "System date: ";
//		checkDaysOfWeek(dayofweek);
//		cout << ", " << day << " - " << month << " - " << year << endl;
//	};
//
//	// Constructor:
//
//	date(int dd, int mm, int yy) {
//		
//		int LeapYears = (int)yy / 4;
//		long a = (yy - LeapYears) * 365 + LeapYears * 366;
//
//		if (mm >= 1 && mm <= 12)
//			this->month = mm;
//		else {
//			cout << "Nhap sai thang. Moi nhap lai. month = " << endl;
//			cin >> mm;
//			this->month == mm;
//		}
//			
//		if (yy >= 1900 && yy <= 2100)
//			this->year = yy;
//
//		// test for a leap year
//		if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
//			if (dd >= 1 || dd <= 31)
//				this->day = dd;
//			else
//				cout << "Nhap sai ngay. Moi nhap lai." << endl;
//		}
//		else if ((mm == 4) || (mm == 6) || (mm == 9) || (mm == 11)) {
//				if ((dd >= 1) || (dd <= 30))
//					this->day = dd;
//				else
//					cout << "Nhap sai ngay. Moi nhap lai." << endl;
//		}
//		else if (mm == 2)
//				if (yy % 4 == 0) {
//					if (dd >= 1 || dd <= 29)
//					this->day = dd;
//				}
//				else if (yy % 4 != 0) {
//					if (dd >= 1 || dd <= 28)
//						this->day = dd;
//				}
//				else {
//					cout << "Nhap sai ngay. Moi nhap lai." << endl;
//				}
//		
//
//			if (mm >= 2) a += 31;
//			if (mm >= 3 && (int)yy / 4 == yy / 4) a += 29;
//			else if (mm >= 3) a += 28;
//			if (mm >= 4) a += 31;
//			if (mm >= 5) a += 30;
//			if (mm >= 6) a += 31;
//			if (mm >= 7) a += 30;
//			if (mm >= 8) a += 31;
//			if (mm >= 9) a += 31;
//			if (mm >= 10) a += 30;
//			if (mm >= 11) a += 31;
//			if (mm == 12) a += 30;
//			a += dd;
//			this->dayofweek = (a - 2) % 7 - 1;
//	}
//}my_time;
//
//
//
//int main()
//{
//	string wday;
//
//	struct date thoigian(21, 14, 2018);
////	thoigian.day = NULL;
//
//
//	cout << "Cau truc duoi dang: dow, dd - mm - yyyy: ";
//	checkDaysOfWeek(thoigian.dayofweek);
//	cout << ", " << thoigian.day << " - " << thoigian.month << " - " << thoigian.year << endl;
//
//	cout << "Cau truc duoi dang: dd / mm / yyyy: ";
//	cout << thoigian.day << " / " << thoigian.month << " / " << thoigian.year << endl;
//
//	cout << "Cau truc duoi dang: mm / dd / yyyy: ";
//	cout << thoigian.month << " - " << thoigian.day << " - " << thoigian.year << endl;
//
//	cout << "Cau truc duoi dang: dow dd.mm.yy: ";
//	checkDaysOfWeek(thoigian.dayofweek);
//	cout << " " << thoigian.day << "." << thoigian.month << "." << thoigian.year << endl;
//	
//	int size_my_time;
//	
//	struct date a;
//	
//	size_my_time = sizeof(a);
//	
//	cout << "Kich thuoc cua struc my_time : size = " << size_my_time << endl;
//
//	system("pause");
//}
