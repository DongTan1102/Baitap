//#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//#include <cstdlib>
//#include <iomanip>
//#include <string.h>
//using namespace std;
//
//typedef struct sinhvien
//{
//
//	int idsv;
//	char tensv[30]; // ten viet lien
//	float diem;
//};
//
//int search(struct sinhvien st[], int id, int biendem);
//void clean(struct sinhvien st[], int deleteitem);
//
////ham de hien thi menu tuy chon
//void displaymenu() {
//	cout << "==========================================" << "\n";
//	cout << " MENU " << "\n";
//	cout << "==========================================" << "\n";
//	cout << " 1. Them ban ghi sinh vien" << "\n";
//	cout << " 2. Xoa ban ghi sinh vien" << "\n";
//	cout << " 3. Cap nhat ban ghi sinh vien" << "\n";
//	cout << " 4. Quan sat tat ca ban ghi sinh vien" << "\n";
//	cout << " 5. Hien thi sinh vien co tong diem cao nhat" << "\n";
//	cout << " 6. Hien thi sinh vien co tong diem thap nhat" << "\n";
//	cout << " 7. Tim sinh vien boi ID" << "\n";
//	cout << " 8. Sap xep cac ban ghi boi diem" << "\n";
//}
//
//void them_banghi(struct sinhvien st[], int& biendem) {
//
//again:
//	cout << "\nNhap ID cua sinh vien: ";
//	cin >> st[biendem].idsv;
//	if (search(st, st[biendem].idsv, biendem) != -1) {
//		cout << "ID nay da ton tai\n"; goto again;
//	}
//
//	cout << "Nhap ten sinh vien: ";
//	cin >> st[biendem].tensv;
//	
//	do {
//		cout << "\nNhap vao diem: ";
//		cin >> st[biendem].diem;
//
//		if (st[biendem].diem < 0 || st[biendem].diem > 10)
//		{
//			printf("\nDiem ly khong hop le. Xin kiem tra lai !");
//		}
//	} while (st[biendem].diem < 0 || st[biendem].diem > 10);
//
//	++biendem;
//
//
//}
//
////ham de tim vi tri ban ghi
//int search(struct sinhvien st[], int id, int biendem) {
//	int found = -1;
//	for (int i = 0; i < biendem && found == -1; i++)
//	{
//
//		if (st[i].idsv == id) found = i;
//
//		else found = -1;
//	}
//
//	return found;
//}
//
////ham de xoa ban ghi 
//void xoa_banghi(struct sinhvien st[], int& biendem) {
//	int id;
//	int index;
//	if (biendem > 0)
//	{
//		cout << "Nhap ID cua sinh vien: ";
//		cin >> id;
//		index = search(st, id, biendem);
//
//		if ((index != -1) && (biendem != 0))
//		{
//			if (index == (biendem - 1)) //Xoa ban ghi cuoi cung
//			{
//
//				clean(st, index);
//				--biendem;
//
//				cout << "Ban ghi da duoc xoa.\n";
//			}
//			else //xoa ban ghi dau tien hoac o giua
//			{
//				for (int i = index; i < biendem - 1; i++)
//				{
//					st[i] = st[i + 1];
//					clean(st, biendem);
//					--biendem;
//				}
//
//			}
//
//		}
//		else cout << "Ban ghi khong ton tai. Kiem tra ID va thu lai.\n";
//
//
//	}
//	else cout << "Khong co ban ghi nao duoc xoa\n";
//}
//
//
////ham de xoa sach ban ghi da bi xoa
//void clean(struct sinhvien st[], int index)
//{
//	st[index].idsv = NULL;
//	strcpy(st[index].tensv, "");
//	st[index].diem = NULL;
//
//}
//
//
////ham de cap nhat ban ghi
//void capnhat_banghi(struct sinhvien st[], int biendem) {
//	int id;
//	int column_index;
//	cout << "Nhap ID cua sinh vien: ";
//	cin >> id;
//	cout << "Ban muon cap nhat truong nao (1-2) ?: ";
//	cin >> column_index;
//
//	int index = search(st, id, biendem);
//
//	if (index != -1)
//	{
//		if (column_index == 1)
//		{
//			cout << "Nhap ten sinh vien: ";
//
//			cin >> st[index].tensv;
//		}
//
//		else if (column_index == 2)
//		{
//			cout << "Nhap diem: ";
//			cin >> st[index].diem;
//		}
//		else cout << "Gia tri chi muc khong hop le";
//	}
//	else cout << "Ban ghi khong ton tai. Kiem tra ID va thu lai.";
//
//
//}
//
////ham de quan sat tat ca ban ghi
//void viewall(struct sinhvien st[], int biendem) {
//	int i = 0;
//	cout << left << setw(5) << "ID" << setw(20) << "TEN" << setw(5) << "DIEM" << endl;
//	cout << "==============================================\n";
//	while (i <= biendem) {
//		if (st[i].idsv != NULL) {
//			cout << left << setw(5) << st[i].idsv << setw(20) << st[i].tensv << setw(5) << st[i].diem << endl;
//		}
//		i = i + 1;
//	}
//}
//
////Ham de hien thi tong diem lon nhat 
//void showmax(struct sinhvien st[], int biendem)
//{
//	float max = st[0].diem;
//	int index = 0;
//	if (biendem >= 2)
//	{
//
//		for (int j = 0; j < biendem - 1; ++j)
//			if (max < st[j + 1].diem) {
//				max = st[j + 1].diem;
//				index = j + 1;
//
//			}
//
//
//	}
//
//	else if (biendem == 1)
//	{
//		index = 0;
//		max = st[0].diem;
//	}
//
//
//	else cout << "Khong tim thay ban ghi nao!\n";
//
//	if (index != -1) cout << "Sinh vien co ID la " << st[index].idsv
//		<< " dat tong diem cao nhat la " << max << endl;
//
//
//}
//
////ham de hien thi tong diem nho nhat
//void showmin(struct sinhvien st[], int biendem)
//{
//
//	float min = st[0].diem;
//	int index = 0;
//	if (biendem >= 2)
//	{
//		for (int j = 0; j < biendem - 1; ++j)
//			if (min > st[j + 1].diem)
//			{
//				min = st[j + 1].diem;
//				index = j + 1;
//
//			}
//
//	}
//
//	else if (biendem == 1)
//	{
//		index = 0;
//		min = st[0].diem;
//	}
//	else cout << "Khong tim thay ban ghi nao!\n";
//
//	if (index != -1) cout << "Sinh vien co ID la " << st[index].idsv
//		<< " co tong diem thap nhat la " << min << endl;
//}
//
////ham de tim ban ghi
//void find(struct sinhvien st[], int biendem)
//{
//	int id;
//	cout << "Nhap ID cua sinh vien: ";
//	cin >> id;
//
//	int index = search(st, id, biendem);
//	if (index != -1)
//	{ //hien thi ban ghi da tim thay
//		cout << left << setw(5) << st[index].idsv << setw(20) << st[index].tensv << setw(5) << st[index].diem << endl;
//	}
//	else cout << "Ban ghi khong ton tai.";
//
//}
//
////ham de sap xep cac ban ghi theo tong diem
//void bubblesort(struct sinhvien dataset[], int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//		for (j = n - 1; j > i; j--)
//			if (dataset[j].diem < dataset[j - 1].diem)
//			{
//				sinhvien temp = dataset[j];
//				dataset[j] = dataset[j - 1];
//				dataset[j - 1] = temp;
//			}
//
//}
//
//int main(int argc, char *argv[])
//{
//
//
//	sinhvien st[80];
//	int biendem = 0;
//
//	//hien thi menu
//	displaymenu();
//	int luachon;
//	char confirm;
//	do
//	{
//		cout << "\nNhap lua chon cua ban (1-8): ";
//		cin >> luachon;
//
//		switch (luachon) {
//			case 1:them_banghi(st, biendem); break;
//			case 2:xoa_banghi(st, biendem); break;
//			case 3:capnhat_banghi(st, biendem); break;
//			case 4:viewall(st, biendem); break;
//			case 5:showmax(st, biendem); break;
//			case 6:showmin(st, biendem); break;
//			case 7:find(st, biendem); break;
//			case 8:bubblesort(st, biendem); break;
//			default:cout << "Khong hop le";
//
//		}
//		cout << "Nhan y hoac Y de tiep tuc: ";
//		cin >> confirm;
//	} while (confirm == 'y' || confirm == 'Y');
//
//	return 0;
//}