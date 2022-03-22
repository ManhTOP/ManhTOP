#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

struct sinhvien {
	char masinhvien[30];
	char hoten[30];
	char  sdt[12];
	float diemtoan, diemly;
	float diemTB, diemRL, diemTL;
};

void tieude0()
{
	cout << "+=======================================================================================================+\n";
	cout << "|"
		 << setw(15) << "Ma Sinh Vien" << setw(4) << "|"
		 << setw(18) << "Ten Sinh Vien" << setw(6) << "|" 
		 << setw(17) << "So Dien Thoai" << setw(5) << "|"
		 << setw(10) << "Diem Toan" << setw(2) << "|"
		 << setw(8) << "Diem Ly" << setw(2) << "|"
		 << setw(15) << "Diem Ren Luyen" << setw(2) << "|" 
		 << endl;
	cout << "+-------------------------------------------------------------------------------------------------------+\n";
}

void tieude1()
{
	cout << "+=================================================================================================================+\n";
	cout << "|"
		 << setw(15) << "Ma Sinh Vien" << setw(4) << "|"
		 << setw(18) << "Ten Sinh Vien" << setw(6) << "|" 
		 << setw(17) << "So Dien Thoai" << setw(5) << "|"
		 << setw(10) << "Diem Toan" << setw(2) << "|"
		 << setw(8) << "Diem Ly" << setw(2) << "|"
		 << setw(8) << "Diem TB" << setw(2) << "|"
		 << setw(15) << "Diem Ren Luyen" << setw(2) << "|" 
		 << endl;
	cout << "+-----------------------------------------------------------------------------------------------------------------+\n";
}

void tieude2()
{
	cout << "+=================================================================================================================================+\n";
	cout << "|"
		 << setw(15) << "Ma Sinh Vien" << setw(4) << "|"
		 << setw(18) << "Ten Sinh Vien" << setw(6) << "|"
		 << setw(17) << "So Dien Thoai" << setw(5) << "|"
		 << setw(10) << "Diem Toan" << setw(2) << "|"
		 << setw(8) << "Diem Ly" << setw(2) << "|"
		 << setw(8) << "Diem TB" << setw(2) << "|"
		 << setw(15) << "Diem Ren Luyen" << setw(2)<< "|" 
		 << setw(14) << "Diem Tich Luy" << setw(2) << "|" 
		 << endl;
	cout << "+---------------------------------------------------------------------------------------------------------------------------------+\n";
}

void xuatdiemtb(sinhvien sv[])
{
	for (int i = 0; i < 3; i++)
	{
		cout << "|"
			 << setw(15) << sv[i].masinhvien << setw(4) << "|"
			 << setw(18) << sv[i].hoten << setw(6) << "|" 
			 << setw(17) << sv[i].sdt << setw(5) << "|"
			 << setw(10) << sv[i].diemtoan << setw(2) << "|"
			 << setw(8) << sv[i].diemly << setw(2) << "|"
			 << setw(8) << sv[i].diemTB << setw(2) << "|"
			 << setw(15) << sv[i].diemRL << setw(2) << "|"
			 << endl;
		cout << "+-----------------------------------------------------------------------------------------------------------------+\n";
	}            

}

void xuatdiemTL(sinhvien sv[])
{
	for (int i = 0; i < 3; i++)
	{
		cout << "|"
			 << setw(15) << sv[i].masinhvien << setw(4) << "|"
			 << setw(18) << sv[i].hoten << setw(6) << "|"
             << setw(17) << sv[i].sdt << setw(5) << "|"
			 << setw(10) << sv[i].diemtoan << setw(2) << "|"
			 << setw(8) << sv[i].diemly << setw(2) << "|"
			 << setw(8) << sv[i].diemTB << setw(2) << "|"
			 << setw(15) << sv[i].diemRL << setw(2) << "|"
			 << setw(14) << sv[i].diemTL << setw(2) << "|"
			 << endl;
		cout << "+---------------------------------------------------------------------------------------------------------------------------------+\n";
	}             
}

float diemtb(sinhvien sv[])
{
	for (int i = 0; i < 3; i++)
	{
		sv[i].diemTB = (sv[i].diemtoan + sv[i].diemly) / 2;
	}
	for (int i = 0; i < 3; i++)
	{
		return sv[i].diemTB;
	}
}

float diemTL(sinhvien sv[])
{
	for (int i = 0; i < 3; i++)
	{
		sv[i].diemTL = (sv[i].diemRL + sv[i].diemTB) / 2;
	}
	for (int i = 0; i < 3; i++)
	{
		return sv[i].diemTL;
	}
}

void nhapsinhvien(sinhvien sv[])
{
	for (int i = 0; i < 3; i++)
	{
		cin.ignore();
		cout << "Nhap thong tin cua sinh vien thu " << i + 1 << " : \n";
		cout << "\t\t Nhap Ma Sinh Vien: ";
		cin.getline(sv[i].masinhvien,30);
		cout << "\t\t Nhap Ho Ten: ";
		cin.getline(sv[i].hoten,30);
		cout << "\t\t Nhap So Dien Thoai: ";
		cin.getline(sv[i].sdt,12); 
		cout << "\t\t Nhap Diem Toan: ";
		cin >> sv[i].diemtoan;
		cout << "\t\t Nhap Diem Ly: ";
		cin >> sv[i].diemly;
		cout << "\t\t Nhap Diem Ren Luyen: ";
		cin >> sv[i].diemRL;
	}
}

void xuat(sinhvien sv)
{

	cout << "|"
		 << setw(15) << sv.masinhvien << setw(4) << "|"
		 << setw(18) << sv.hoten << setw(6) << "|" 
		 << setw(17) << sv.sdt << setw(5) << "|"
		 << setw(10) << sv.diemtoan << setw(2) << "|"
		 << setw(8) << sv.diemly << setw(2) << "|"
		 << setw(15) << sv.diemRL << setw(2) << "|" 
		 << endl;
	cout << "+-------------------------------------------------------------------------------------------------------+\n";
}             
void xuatsinhvien(sinhvien sv[])
{
	for (int i = 0; i < 3; i++)
	{
		xuat(sv[i]);
	}

}

void xuat1(sinhvien sv)
{
	cout << "|"
		 << setw(15) << sv.masinhvien << setw(4) << "|"
		 << setw(18) << sv.hoten << setw(6) << "|" 
		 << setw(17) << sv.sdt << setw(5) << "|"
		 << setw(10) << sv.diemtoan << setw(2) << "|"
		 << setw(8) << sv.diemly << setw(2) << "|"
		 << setw(8) << sv.diemTB << setw(2) << "|"
		 << setw(15) << sv.diemRL << setw(2) << "|"
		 << setw(14) << sv.diemTL << setw(2) << "|"
		 << endl;
	cout << "+---------------------------------------------------------------------------------------------------------------------------------+\n";
}             

void sapxep(sinhvien sv[])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (sv[i].diemRL > sv[j].diemRL)
			{
				sinhvien b = sv[i];
				sv[i] = sv[j];
				sv[j] = b;
			}
		}
	}
}

void sapxepdiemtichluy(sinhvien sv[])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (sv[i].diemTL < sv[j].diemTL)
				{
				sinhvien b = sv[i];
				sv[i] = sv[j];
				sv[j] = b;
			}
		}
	}
}

void diemtichluylonnhat(sinhvien sv[])
{

	sapxepdiemtichluy(sv);
	xuat1(sv[0]);

}

void timkiem(sinhvien sv[], float hs)
{
	cout << "Nhap hs: ";
	cin >> hs;
	tieude2();
	for (int i = 0; i < 3; i++)
	{
		if (sv[i].diemTB > hs)
		{
			xuat1(sv[i]);
		}
	}
}

void ghitep(sinhvien sv[])
{
	ofstream f;
	f.open("sv.dat", ios::out);
	if (!f)
	{
		cout << "file khong ton tai!";
		exit(1);
	}
	for (int i = 0; i < 3; i++)
	{
		f << sv[i].masinhvien << "\t\t"
          << sv[i].hoten << "\t\t"
          << sv[i].sdt << "\t\t"
          << sv[i].diemtoan << "\t\t"
          << sv[i].diemly << "\t\t"
		  << sv[i].diemTB << "\t\t"
		  << sv[i].diemRL << "\t\t"
		  << sv[i].diemTL << "\t\t" 
		  << endl;
	}
	f.close();

}

void doctep(sinhvien sv[])
{
	tieude2();
	fstream f;
	f.open("sv.dat", ios::in);
	if (!f)
	{
		cout << "file khong ton tai!";
		exit(1);
	}
	for (int i = 0; i < 3; i++)
	{
		f >> sv[i].masinhvien;
		f >> sv[i].hoten;
		f >> sv[i].sdt;
		f >> sv[i].diemtoan;
		f >> sv[i].diemly;
		f >> sv[i].diemTB;
		f >> sv[i].diemRL;
		f >> sv[i].diemTL;
	}
	f.close();
	for (int i = 0; i < 3; i++)
	{
	    cout << "|"
			 << setw(15) << sv[i].masinhvien << setw(4) << "|"
			 << setw(18) << sv[i].hoten << setw(6) << "|"
             << setw(17) << sv[i].sdt << setw(5) << "|"
			 << setw(10) << sv[i].diemtoan << setw(2) << "|"
			 << setw(8) << sv[i].diemly << setw(2) << "|"
			 << setw(8) << sv[i].diemTB << setw(2) << "|"
			 << setw(15) << sv[i].diemRL << setw(2) << "|"
			 << setw(14) << sv[i].diemTL << setw(2) << "|"
			 << endl;
		cout << "+---------------------------------------------------------------------------------------------------------------------------------+\n";
	}             
}

int main()
{
	sinhvien sv[3];
	int luachon; 
	nhaplai: 
	while(1){		
	cout << "\n============================Menu============================\n\n"; 
	cout << " 1.Nhap Danh Sach Sinh Vien \n";
	cout << " 2.In Ra Danh Sach Sinh Vien \n";
	cout << " 3.Tinh Diem TB cua sinh vien \n";
	cout << " 4.Tinh Diem TL cua sinh vien \n";
    cout << " 5.Sap xep danh sach sinh vien theo thu tu tang dan ve diem TL \n";
    cout << " 6.In thong tin sinh vien co diem TL cao nhat \n";
	cout << " 7.In thong tin tong so sinh vien trong lop \n";
	cout << " 8.In danh sach sinh vien co diem TB > hs \n";
	cout << " 9.Luu danh sach sinh vien ra tep sv.dat \n"; 
    cout << " 10.Doc danh sach sinh vien tu tep sv.dat \n"; 
	cout << " 0.Ket Thuc\n";
	
	cout << "\n\n";	
	cout << " Moi Ban Nhap Lua Chon: ";
	cin >> luachon;
	
	if(luachon==1)
	{
		nhapsinhvien(sv);
	}
	else if(luachon==2)
	{
		cout << " Thong Tin Sinh Vien Vua Nhap: \n";
	    tieude0();
	    xuatsinhvien(sv);
	}
	else if(luachon == 3)
	{
		cout << " Tinh diem trung binh: \n";
	    tieude1();
	    diemtb(sv);
	    xuatdiemtb(sv);
	}
	else if(luachon ==4)
	{
		cout << " Tinh cot diem tich luy: \n";
	    tieude2();
     	diemTL(sv);
	    xuatdiemTL(sv);

	}
	else if(luachon == 5)
	{
	     cout << " Sap Xep Tang Dan Theo Diem Ren Luyen: \n";
         tieude2();
         sapxep(sv);
         xuatdiemTL(sv);
	}
	else if(luachon == 6)
	{
         cout << " Thong Tin Sinh Vien Co Diem Tich Luy Cao Nhat: \n";
         tieude2();
         diemtichluylonnhat(sv);
	}
	else if(luachon == 7)
	{
	     cout << " Danh Sach Tong So Sinh Vien \n";
         tieude2();
         xuatdiemTL(sv);
	}
	else if(luachon == 8)
	{
	     cout << " Danh Sach Sinh Vien Co Diem Trung Binh >hs \n";
         int hs;
         timkiem(sv, hs);
	}
	else if(luachon == 9)
	{
	     cout << " Ghi Thong Tin Vao Tep sv.dat: \n";
   	     ghitep(sv);
   	     cout << "Ghi vao tep sv.dat thanh cong !"; 
	}
	else if(luachon == 10)
	{
		cout << "Doc danh sach sinh vien tu tep sv.dat: \n"; 
		doctep(sv);
	}
	else if(luachon == 0)
	{
		return 0;
	}
	else
	{
		cout << " Lua Chon Khong Ton Tai!\n";
	}
	goto nhaplai;	
	}
}