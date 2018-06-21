#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <math.h>
using namespace std;

void run_time(int &, int &, int &);

void run_time(int &hour, int &min, int &sec)
{
	if (hour == 24)
	{
		hour = 0;
		for (int gio = hour; gio <= 23; gio++)
		{
			if (min == 60)
			{
				min = 0;
				for (int phut = min; phut <= 59; phut++)
				{
					for (int giay = 1 + sec; giay <= 59; giay++)
					{
						system("cls");
						cout << "The current time on the system: ";
						cout << gio << ":" << phut << ":" << giay << endl;
						Sleep(1000);
					}
				}
			}
			else
			{
				for (int phut = min; phut <= 59; phut++)
				{
					for (int giay = 1 + sec; giay <= 59; giay++)
					{
						system("cls");
						cout << "The current time on the system: ";
						cout << gio << ":" << phut << ":" << giay << endl;
						Sleep(1000);
					}
				}
			}
		}
	}
	else
	{
		for (int gio = hour; gio <= 23; gio++)
		{
			if (min == 60)
			{
				min = 0;
				for (int phut = min; phut <= 59; phut++)
				{
					for (int giay = 1 + sec; giay <= 59; giay++)
					{
						system("cls");
						cout << "The current time on the system: ";
						cout << gio << ":" << phut << ":" << giay << endl;
						Sleep(1000);
					}
				}
			}
			else
			{
				for (int phut = min; phut <= 59; phut++)
				{
					for (int giay = 1 + sec; giay <= 59; giay++)
					{
						system("cls");
						cout << "The current time on the system: ";
						cout << gio << ":" << phut << ":" << giay << endl;
						Sleep(1000);
					}
				}
			}
		}
	}
}

int main()
{
	// tra ve date/time hien tai dua tren system hien tai
	time_t baygio = time(0);

	tm *ltm = localtime(&baygio);

	run_time(ltm->tm_hour, ltm->tm_min, ltm->tm_sec);
	// in ra thoi gian hien tai tren system hien tai

	system("pause");
}

