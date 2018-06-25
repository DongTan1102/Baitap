#include "People.h"
#include "Staff.h"
#include "CDate.h"

using namespace std;

int main()
{
	People Tan;
	Staff Taan;
	CDate birthday, joinedDate;

	Tan.setPeople("Dong Thanh Tan", birthday.inputDate(11, 02, 1996), 10);
	Tan.printInfo();
	Taan.setPeople("Doong Taan", birthday.inputDate(29, 12, 2003), 06);
	Taan.setStaff(001, joinedDate.inputDate(30, 5, 2007), 7);
	Taan.printInfo();




	system("pause");
	return 0;
}