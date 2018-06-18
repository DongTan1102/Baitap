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
//void bubbleSort(int *a, int offset, int count)
//{
//	int temp;
//	int i, j;
//	bool swapped = false;
//
//	// lap qua tat ca cac so
//	for (i = offset; i <= count; i++) {
//		swapped = false;
//
//		// vong lap thu hai
//		for (j = offset; j <= count - i; j++) {
////			printf("\nSo sanh cac phan tu: [ %d, %d ] ", a[j], a[j + 1]);
//
//			// kiem xa xem so ke tiep co nho hon so hien tai hay khong
//			//   trao doi cac so. 
//			//  (Muc dich: lam noi bot (bubble) so lon nhat) 
//
//			if (a[j] > a[j + 1]) {
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//
//				swapped = true;
////				printf(" => trao doi [%d, %d]\n", a[j], a[j + 1]);
//			}
//			//else {
//			//	printf(" => khong can trao doi\n");
//			//}
//
//		}
//
//		// neu khong can trao doi nua, tuc la 
//		//   mang da duoc sap xep va thoat khoi vong lap. 
//		if (!swapped) {
//			break;
//		}
//
//		//printf("Vong lap thu %d#: ", (i + 1));
//		//xuat_mang(a, 5);
//	}
//}
//
//void main()
//{
//	int a[] = { 100, 4, 2, 6, 3, 1 };
//
//	cout << "\nMang a: ";
//	xuat_mang(a, size(a));
//
//	bubbleSort(a, 1, 4);
//
//	cout << "\nSau khi sap xep:" << endl;
//	cout << "\nMang a: ";
//	xuat_mang(a, size(a));
//
//	system("pause");
//}