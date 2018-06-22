//#include<stdio.h>
//#include<conio.h>
//#include<windows.h>
//#include <string>
//#include<iomanip>
//#include <iostream>
//#include<fstream> 
//
//using namespace std;
//
////void bubbleSort(int *arr, int count, int(*order) (int, int));
////int CheckBigger(int a, int b) { return a>b; }
////int CheckSmaller(int a, int b) { return a<b; }
//
//
//void swap(int *xp, int *yp)
//{
//	int temp = *xp;
//	*xp = *yp;
//	*yp = temp;
//}
//
//// An optimized version of Bubble Sort
//void bubbleSort(int arr[], int count)
//{
//	int i, j;
//	bool swapped;
//	for (i = 0; i < count - 1; i++)
//	{
//		swapped = false;
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(&arr[j], &arr[j + 1]);
//				swapped = true;
//			}
//		}
//
//		// IF no two elements were swapped by inner loop, then break
//		if (swapped == false)
//			break;
//	}
//}
//
///* Function to print an array */
//void printArray(int arr[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	printf("n");
//}
//
//// Driver program to test above functions
//int main()
//{
//	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, n);
//	printf("Sorted array: \n");
//	printArray(arr, n);
//	return 0;
//}