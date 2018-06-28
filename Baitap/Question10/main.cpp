#include "People.h"
#include "Staff.h"
#include "Student.h"
#include "CDate.h"

using namespace std;

int main()
{
	People Tan;
	Staff Taan;
	Student A;
	CDate birthday, joinedDate;

	Tan.setPeople("Dong Thanh Tan", birthday.inputDate(11, 02, 1996), 10);
	Tan.printInfo();
	
	Taan.setPeople("Doong Taan", birthday.inputDate(29, 12, 2003), 06);
	Taan.setStaff(001, joinedDate.inputDate(30, 5, 2007), 7);
	Taan.printInfo();

	A.setPeople("Nguyem A", birthday.inputDate(4, 6, 1994), 02);
	A.setStudent(07, 3);
	A.printInfo();


	system("pause");
	return 0;
}