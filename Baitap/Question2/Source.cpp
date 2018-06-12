#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <math.h>

using namespace std;

int run_time(int);

 int run_time(int MAX)
{
	int giay = 0;

	for (int i = 0; i <= MAX; i++)
	{
		Sleep(1);
		giay = giay++;
	}
	 
	return giay;
}


void main()
{
	int MAX;
	int time = 0;
	cout << "Nhap MAX = ";
	cin >> MAX;

	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			for (int k = 0; k < MAX; k++)
			{
				time = time++;
			}
		}
	}	
	
	//for (register int i = 0; i < MAX; i++)
	//{
	//	for (register int j = 0; j < MAX; j++)
	//	{
	//		for (register int k = 0; k < MAX; k++)
	//		{
	//		}
	//	}
	//}

	cout << "Thoi gian thuc thi: " << time << endl;
	system("pause");
}