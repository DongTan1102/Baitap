//#include <iostream>
//#include <ctime>
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <Windows.h>
//#include <math.h>
//
//using namespace std;
//
//void invert(int *input, int &num_element)
//{
//	cout << "Nhap so phan tu cua mang n = ";
//	cin >> num_element;
//	for (int i = 0; i < num_element; i++)
//	{
//		cout << "\nSo nguyen thu a[" << i + 1 << "] = ";
//		cin >> input[i];
//	}
//}
//
//void invert(int *input, int num_element, int *output)
//{
//	int j = 0, temp;
//	for (int i = num_element - 1; i >= 0; i--)
//	{
//		output[j] = input[i];
//		j++;
//	}
//}
//
//void xuat_mang(int *a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << "\t";
//	}
//	cout << endl;
//}
//
//void main()
//{
//	int n;
//	int input[100], output[100];
//	invert(input, n);
//
//	cout << "\nMang input: ";
//	xuat_mang(input,n);
//
//	invert(input, n, output);
//
//	cout << "\nSau khi dao:" << endl;
//	cout << "\nMang output: ";
//	xuat_mang(output, n);
//
//	cout << "\nMang input: ";
//	xuat_mang(input, n);
//
//	system("pause");
//}