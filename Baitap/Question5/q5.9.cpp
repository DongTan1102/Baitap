#include <iostream>
using namespace std;

void main()
{
	int *a = new int;
	*a = 10;
	delete a;
	printf("%d", a);
	system("pause");
}
