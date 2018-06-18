#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <math.h>

using namespace std;

void main()
{
	float i;
	
	cout << "Nhap so thuc : i = ";
	cin >> i;

	cout << "Tra ve gia tri nguyen thap nhat theo cach lam tron gia tri. i = " << floor(i) << endl;

	cout << "Tra ve gia tri nguyen cao nhat theo cach lam tron gia tri. i = " << ceil(i) << endl;

	cout << "Tra ve gia tri nguyen theo cach lam tron gia tri. i = " << round(i) << endl;

	system("pause");
}
