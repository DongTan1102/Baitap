#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <math.h>
inline bool IsPressed(int presskey)
{
	return GetAsyncKeyState(presskey);
}
int main()
{
	system("color C");
	int bienphu = 0;
	char n;
	printf("\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n");
	printf("\n00:00:00");
	scanf_s("%c", &n);
	if (n == '\n')
	{
		system("cls");
		printf("\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n");
		for (int gio = 0; gio <= 24; gio++)
		{
			for (int phut = 0; phut <= 59; phut++)
			{
				if (phut >= 1)
					printf("\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n");
				for (int giay = 0; giay <= 59; giay++)
				{
					if (IsPressed(VK_SPACE))
						bienphu++;
					if (bienphu % 2 == 1)
						system("pause");
					if (giay == 0)
					{
						printf("\n");
					}
					printf("%02d:%02d:%02d", gio, phut, giay);
					Sleep(1000);
					system("cls");
					printf("\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n");
					printf("\n");
				}
				system("cls");
			}
		}
	}
	_getch();
	return 0;
}