#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <string.h>
#include<iomanip>
#include <iostream>
#include<fstream> 
#define File_Name "sinhvien.dat"

using namespace std;

struct date
{
	int ngay, thang, nam;
};
struct sinhvien
{
	char malop[20];
	int masv;
	char hoten[30];
	struct date date;
	float diemTB;
};

//Khai bao cau truc du lieu dslk 
struct Node {
	sinhvien data;
	Node *next;
};


struct List {
	Node *pFirst;
	Node *pLast;
};

//Khoi tao danh sach lk
void Init(List L)
{
	L.pFirst = L.pLast = NULL;
}
//Tao Node sinh vien trong danh sach
Node* createNode(sinhvien sv)
{
	//Cap phat 1 Node
	Node *p = new Node;
	if (p == NULL)
	{
		return NULL;
	}
	p->data = sv;       //Luu sv vao data
	p->next = NULL;
	return p;
}
//Kiểm tra danh sách rỗng hay không
int Isempty(List &L)
{
	return (L.pFirst == NULL);
}
//Them Node vao dau danh sach
void addFirst(List &L, sinhvien sv)
{
	Node* p = createNode(sv);
	if (L.pFirst = NULL) //Ds rong
	{
		L.pFirst = L.pLast = p;
	}
	else
	{
		p->next = L.pFirst;     //p tro toi node dau ds
		L.pFirst = p;           //p nam tai vt node dau
	}

}

//Them Node vao cuoi danh sach
void addLast(List &L, sinhvien sv)
{
	Node* p = createNode(sv);
	if (L.pFirst = NULL) //Ds rong
	{
		L.pFirst = L.pLast = p;
	}
	else
	{
		L.pLast->next = p;   //pLast tro toi p
		L.pLast = p;         //p tro thanh node cuoi
	}
}

void addAfter(List &L, Node *p, Node* newNode)
{
	if (p != NULL)
	{
		newNode->next = p->next;
		p->next = newNode;
		if (p == L.pLast)  L.pLast = newNode;
	}
}


void deleteFirst(List &L)
{
	Node *pDel = L.pFirst;
	L.pFirst = L.pFirst->next;
	delete pDel;
}

void deleteLast(List &L)
{
	Node *pDel = L.pLast;
	Node *pPrev;
	pPrev->next = NULL;
	delete pDel;
}
void delete_k(List &L, sinhvien sv)
{
	Node *p = L.pFirst;
	Node *q = NULL;
	//    while(p)
	//   {
	//        if(p->data==sv.)
	//        break;
	//        q=p;
	//        p=p->next;     //p luon duyet truoc q 1 node
	//    }
	//    if(p==NULL)
	//    cout<<"sv tim thay";
	if (q != NULL)
	{
		if (p != NULL)
		{
			q->next = p->next;
			delete (p);
			if (p == L.pLast)  L.pLast = q;
			delete(p);
		}
	}
	else
	{
		L.pFirst = p->next;
		delete(p);
		if (L.pFirst == NULL)  L.pLast = NULL;
	}
}

void CapNhat(List &L)
{
	int chon;
	sinhvien sv;
	Node *p;
	Node* newNode;
	system("COLOR 1B");
	cout << "1.Them vao dau danh sach.\n";
	cout << "2.Them vao cuoi danh sach.\n";
	cout << "3.Them vao vi tri k cua danh sach.\n";
	cout << "4.Xoa dau danh sach.\n";
	cout << "5.Xoa cuoi danh sach.\n";
	cout << "6.Xoa tai vi tri k cua danh sach.\n";
	switch (chon)
	{
	case 1: addFirst(L, sv);
	case 2: addLast(L, sv);
	case 3: addAfter(L, p, newNode);
	case 4: deleteFirst(L);
	case 5: deleteLast(L);
	case 6: delete_k(L, sv);
	}
}

void writeFile(List L, int n)
{
	Node *temp; temp = L.pFirst;
	if (temp == NULL) return;

	fstream fileout("danhsach.bin", ios::binary | ios::out);

//	int n = 0;
	while (temp != NULL) {
		n++;
		fileout.write((char*)&(temp->next), sizeof(sinhvien)); //temp->info
		temp = temp->next;
	}
	fileout.close();
}

void readFile(List &L)
{

	sinhvien sv;
	fstream infile("danhsach.txt", ios::binary | ios::in);
//	if (infile == NULL) return;

	while (!infile.eof()) {
		infile.read((char*)&sv, sizeof(sinhvien));
		if (Isempty(L))
		{
			addFirst(L, sv);
		}
		else  addLast(L, sv);
	}
	infile.close();
}
void Nhap()
{
	sinhvien sv;
	system("cls");
	printf("-------------------------------");
	cout << "\nHo ten sv: ";
	fflush(stdin);
	cin.getline(sv.hoten, 30);
	cout << "Ma lop: ";
	cin.getline(sv.malop, 5);
	cout << "Ma sv: ";
	cin >> sv.masv;
	cout << "Nhap vao ngay thang nam sinh\n";
	do
	{
		cout << "*Ngay sinh: ";
		cin >> sv.date.ngay;
		fflush(stdin);
	} while (sv.date.ngay > 31 || sv.date.ngay < 1);
	do
	{
		fflush(stdin);
		cout << "*Thang sinh: ";
		cin >> sv.date.thang;
	} while (sv.date.thang > 12 || sv.date.thang < 1);
	do
	{
		fflush(stdin);
		cout << "*Nam sinh: ";
		cin >> sv.date.nam;
	} while (sv.date.nam > 2016 || sv.date.nam < 1000);

	do
	{
		cout << "Nhap vao diem trung binh: ";
		cin >> sv.diemTB;
	} while (sv.diemTB <= 0 || sv.diemTB >= 10);

}
void NhapSV(List &L)
{
	sinhvien sv;
	system("cls");
	int n;
	cout << "Nhap so luong ho so: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Thong tin ho so sinh vien thu:  " << i + 1 << " \n";
		Nhap();
		addLast(L, sv);
		system("cls");
	}
	cout << "Hoan thanh nhap ho so" << endl;

}

void InDS(List &L)
{
	int i = 1;
	system("cls");
	sinhvien sv;

	if (L.pFirst == NULL)
		cout << endl << "Khong co sinh vien nao trong danh sach!!!\n";


	Node *p = L.pFirst;
	cout << " ________________________________________________________________________________________________________" << endl;
	cout << "|  STT  |         Ho va ten         |    Ngay sinh   |    Ma sinh vien   |    Ma lop    |     Diem TB   |" << endl;
	cout << "|_______|___________________________|________________|___________________|______________|_______________|" << endl;
	while (p != NULL)
	{
		cout << "|" << setw(4) << i << "  |" << setw(20) << p->data.hoten << setw(5) << p->data.date.ngay << " /" << p->data.date.thang << " /" << p->data.date.nam
			<< "   |" << setw(12) << p->data.masv << "   |" << setw(10) << p->data.malop << "   |" << setw(12) << p->data.diemTB;
		p = p->next;
		i++;
	}
	cout << "\n|_______|___________________________|________________|___________________|______________|_______________|\n";
}

void gotoxy(int x, int y)
{
	static HANDLE h = NULL;
	if (!h)
	{
		h = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD c = { x,y };
		SetConsoleCursorPosition(h, c);
	}
}
int Drawtext(int line, int cot, int focus, char Text[])
{

	HANDLE hConsoleColor;
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleColor, focus);

	printf("%s\n", Text);

}


int Menu(int &chon)
{
	sinhvien *sv;
	int n = 0;
	system("cls");

	char TextMenu[][100] = { "                              |************* Quan ly sinh vien *************|",
		"                              |              1. Them moi ho so.             |",
		"                              |              2. Cap nhat danh sach.         |",
		"                              |              3. IN danh sach.               |",
		"                              |              4. Sap xep danh sach.          |",
		"                              |              5. Tim kiem ho so.             |",
		"                              |              6. Thong ke ho so.             |",
		"                              |              7. Thoat.                      |",
		"                              ***********************************************",
	};


	int i = 2;        //dong chon bat dau tu vi tri dong 2
	char ch;

	do {
		system("cls");
		for (int t = 1; t <= 9; t++)
		{

			if (t == i) Drawtext(7 + t, 2, 3, TextMenu[t - 1]);
			else Drawtext(7 + t, 2, 14, TextMenu[t - 1]);
		}
		do {
			ch = _getch();
			if (ch == 224) ch = _getch();
		} while (!(ch == 224 || ch == 13 || ch == 27 || ch == 80 || ch == 72));
		if (ch == 80) {         //ky tu xuong
			i++;
			if (i > 8) i = 2; //neu dong chon het dong 8 quay lai dong 2
		}
		if (ch == 72)          //ky tu len
		{
			i--;
			if (i < 1) i = 7;
		}
	} while (!(ch == 13 || ch == 27));

	List L;
	switch (i)
	{
	case 2:
	{

		NhapSV(L);
		writeFile(sv, n);
		break;
	}
	case 3:
	{
		CapNhat(L);
		break;
	}
	case 4:
	{
		readFile(L);
		InDS(L);
		system("pause");
		break;

	case 5:
	{
		break;
	}
	case 6:
	{
		break;
	}
	case 7: return 1;
	}

	}

}


int main() {
	List L; int n = 0, chon;
	sinhvien sv;
	Init(L);
	readFile(L);
	writeFile(, n);
	system("cls");
	while (1)
	{
		Menu(chon);
	}

	system("PAUSE");
}