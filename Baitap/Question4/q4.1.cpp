//#include <iostream>
//#include <ctime>
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <Windows.h>
//#include <math.h>
//
//using namespace std;
//void nhap_mang(int*, int&);
//void xuat_mang(int*, int);
//void tinh_toan(int*, int);
//void tinh_toan1(int*, int);
//
//void nhap_mang(int *a, int &n)
//{
//	cout << "Nhap 10 so nguyen cua mang: ";
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "\nSo nguyen thu a[" << i + 1 << "] = ";
//		cin >> a[i];
//	}
//}
//
//void xuat_mang(int *a, int n)
//{
//	cout << "So phan tu cua mang n = " << n << endl;
//	for (int i = 0; i < n; i++)
//		cout << "\nPhan tu thu a[ " << i + 1 << " ] = " << a[i] << endl;
//}
//
//void tinh_toan(int *a, int n)
//{
//	int dem = 0, s_pt = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] >= 10)
//		{
//			dem++;
//			for (int j = dem - 1; j < dem; j++)
//			{
//				a[j] = a[i];
//				s_pt++;
//			}
//		}
//	}
//
//	cout << "So luong cac so nguyen >= 10 la: " << s_pt << endl;
//	xuat_mang(a, dem);
//
//}
//
//void tinh_toan1(int *a, int n)
//{
//	int dem = 0;
//
//	cout << "Cac phan tu nguyen >= 10" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] >= 10)
//		{
//			dem++;
//			cout << "\nPhan tu thu a[ " << i + 1 << " ] = " << a[i] << endl;
//
//		}
//	}
//	cout << "So luong cac so nguyen >= 10 la: " << dem << endl;
//}
//
//void main()
//{
//	int n = 10;
//	int a[100];
//
//	nhap_mang(a, n);
//	xuat_mang(a, n);
//
//	tinh_toan1(a, n);
//
//	system("pause");
//}