#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;


void copyString(char *input, int offset, int length, bool invert, char *output, int output_offset)
{
	char tam[100];
	char *tmp = new char[length];
	for (int i = 0; i < length; i++)
	{
		tmp[i] = input[offset];
		offset++;
		cout << tmp << endl;
	}

	cout << tmp << endl;

	if (invert)
	{
		for (int i = 0; i <length / 2; i++)
		{
			swap(tmp[i], tmp[length - i - 1]);
		}
	}

	cout << tmp << endl;

//	memcpy(&output[output_offset], tmp, sizeof(tmp) + 1);
	strcpy(&output[output_offset], tmp);

	delete[] tmp;
}


void main() {
	
	char input[] = "Hello world";
	char output[100] = "My name is C++";

	cout << input << endl;
	cout << output << endl;

	copyString(input, 6, 5, true, output, 11);

	cout << input << endl;
	cout << output << endl;

	system("pause");
}
