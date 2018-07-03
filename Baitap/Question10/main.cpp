#include "People.h"
#include "Staff.h"
#include "Student.h"
#include "CDate.h"
#include "Teacher.h"

using namespace std;

int main()
{
	People Tan;
	Staff Taan;
	Student A;
	Teacher B;
	CDate birthday, joinedDate;

	Tan.setPeople("Dong Thanh Tan", birthday.inputDate(11, 02, 1996), 10);
	Tan.printInfo();
	
	Taan.setPeople("Doong Taan", birthday.inputDate(29, 12, 2003), 06);
	Taan.setStaff(001, joinedDate.inputDate(30, 5, 2007), 7);
	Taan.printInfo();

	A.setPeople("Nguyem A", birthday.inputDate(4, 6, 1994), 02);
	A.setStudent(07, 3);
	A.printInfo();

	B.setPeople("Nguyen B", birthday.inputDate(5, 6, 1968), 03);
	B.setStaff(002, joinedDate.inputDate(25, 06, 2006), 5);

	system("pause");
	return 0;
}