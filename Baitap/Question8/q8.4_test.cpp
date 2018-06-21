//#include <conio.h>
//#include <stdio.h>
//#include <stdlib.h>
//struct sinhvien
//{
//	int studentID;
//	char name[30];
//	char sclass[30];
//	float mark;
//};
//
//struct sinhvien b[100];
//int n;
//void editStudent();
//void seachStudent();
//void displayStudent();
//void inputStudent();
//void main()
//{
//	while (1)
//	{
//		char choice;
//		printf("\n*--------------Menu---------------*");
//		printf("\n|1. Student Input                 |");
//		printf("\n|2.Display student with Mark >10  |");
//		printf("\n|3.Seach Student by ID            |");
//		printf("\n|4.Edit                           |");
//		printf("\n|5.Exit                           |");
//		printf("\n*---------------------------------*");
//		printf("\nPlesae Enter choice ! :  ");
//		fflush(stdin);
//		scanf("%c", &choice);
//		
//		system("clr");
//
//		switch (choice)
//		{
//		case '1':
//			inputStudent();
//			break;
//		case '2':
//			displayStudent();
//			break;
//		case '3':
//			seachStudent();
//			break;
//		case'4':
//			editStudent();
//			break;
//		case '5':
//			exit(0);
//		default:
//			printf("Plesae select choice 1->4 !");
//			break;
//		}
//	}
//}
//void inputStudent()
//{
//	printf("Intput Studen N:   ");
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++)
//	{
//		printf("\nInput Studen No.%d", i + 1);
//		printf("\nInput ID: ");
//		scanf("%d", &b[i].studentID);
//		printf("Input Name:  ");
//		scanf("%s", &b[i].name);
//		printf("Input Class:   ");
//		scanf("%s", &b[i].sclass);
//		printf("Input Mark: ");
//		scanf("%f", &b[i].mark);
//		system("clr");
//	}
//}
//void displayStudent()
//{
//	int check = 0;
//	for (int i = 0; i<n; i++)
//	{
//		if (b[i].mark>10)
//		{
//			check = 1;
//			printf("\n---------------------------------------");
//			printf("\nStudent ID  : %d", b[i].studentID);
//			printf("\nStudent Name: %s", b[i].name);
//			printf("\nClass : %s ", b[i].sclass);
//			printf("\nMark : %f", b[i].mark);
//			printf("\n---------------------------------------");
//		}
//	}
//	if (check == 0)
//	{
//		printf("\nNo Student have mark >10");
//	}
//}
//void seachStudent()
//{
//	int a, g;
//	g = 0;
//	printf("\nInput ID Want Seach : ");
//	scanf("%d", &a);
//	for (int i = 0; i<n; i++)
//	{
//
//		if (a == b[i].studentID)
//		{
//			g = 1;
//			printf("\nStudent ID  : %d", b[i].studentID);
//			printf("\nStudent Name: %s", b[i].name);
//			printf("\nClass : %s ", b[i].sclass);
//			printf("\nMark : %f", b[i].mark);
//		}
//
//	}
//	if (g == 0)
//	{
//		printf("Seach faled!");
//	}
//}
//void editStudent()
//{
//	int x, u;
//	u = 0;
//	printf("\nYou want edit ! plesea input ID of student:  ");
//	scanf("%d", &x);
//	for (int i = 0; i <n; i++)
//	{
//		if (x == b[i].studentID)
//		{
//			u = 1;
//			printf("Input Again !");
//			printf("Input Name:  ");
//			scanf("%s", &b[i].name);
//			printf("Input Class:   ");
//			scanf("%s", &b[i].sclass);
//			printf("Input Mark: ");
//			scanf("%f", &b[i].mark);
//			system("clr");
//		}
//	}
//	if (u == 0)
//	{
//		printf("No id same plesea! try again ");
//	}
//}