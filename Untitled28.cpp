#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct maytinh {
	char mahang[30];
	string tenhang;
	int dungluongRAM;
	float dongia;


};
void nhap(maytinh mt[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap thong Tin Cua Ma Hang Thu " << i + 1 << " : \n";
		cout << "\t\tNhap Ma Hang: ";
		cin.getline(mt[i].mahang,30);
		cout << "\t\tNhap Ten Ma Hang: ";
		getline(cin,mt[i].tenhang);
		cout<<"\t\tNhap Dung Luong Ram: ";
		
		do{
			cin>>mt[i].dungluongRAM;
			if(mt[i].dungluongRAM<0)
			{
				cout<<"Nhap Lai Dung Luong: ";
			}
		}while(mt[i].dungluongRAM<0);
		cout<<"\t\tNhap Don Gia: ";
		do{
			cin>>mt[i].dongia;
			if(mt[i].dongia<0)
			{
				cout<<"Nhap Lai Don Gia: ";
			}
		}while(mt[i].dongia<0);
		

	}
}
void tieude()
{
	cout<<"+=====================================================================+\n";
	cout<<"|"<<setw(12)<<"Ma Hang"
	<<setw(5)<<"|"<<setw(15)<<"Ten Ma Hang"
	<<setw(5)<<"|"<<setw(11)<<"Dung Luong"<<setw(2)<<"|"<<setw(13)<<"Don Gia"<<setw(7)<<"|"<<endl;
	cout<<"+=====================================================================+\n";
}
void xuat1mahang(maytinh mt)
{
	cout<<"|"<<setw(12)<<mt.mahang
	<<setw(5)<<"|"<<setw(15)<<mt.tenhang
	<<setw(5)<<"|"<<setw(11)<<mt.dungluongRAM
	<<setw(2)<<"|"<<setw(13)<<mt.dongia
	<<setw(7)<<"|"<<endl;
	cout<<"+=====================================================================+\n";
}
void xuatdanhsach(maytinh mt[],int n)
{
	for(int i=0;i<n;i++)
	{
		xuat1mahang(mt[i]);
	}
}
void timkiemnhohon600do(maytinh mt[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(mt[i].dongia<600)
		{
		xuat1mahang(mt[i]);	
		}
	}
}
void sapxep(maytinh mt[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((mt[i].tenhang).length()>(mt[j].tenhang).length())
			{
				maytinh tg = mt[i];
				mt[i]=mt[j];
				mt[j]=tg;
			}
		}
	}
}

int main()
{

	int n;

	int luachon;
	cout<<"Nhap So Luong Ma Hang: ";
	
	do{
		cin>>n;
		if(n<0)
		{
			cout<<"Nhap lai So Luong: ";
		}
	}while(n<0);
	maytinh mt[n];
	nhaplai:
	cout<<"============================Menu============================\n";
	cout<<"1.Nhap Danh Sach n May Tinh\n";
	cout<<"2.In Ra Danh Sach Vua Nhap\n";
	cout<<"3.In ra ma hinh cac may tinh co gia re hon 600\n";
	cout<<"4.In ra danh sach cac may tinh da sap xep tang dan theo ten\n";
	
	cout<<"0.Ket Thuc\n";
	
	cout<<"\n\n";
	cout<<"Moi Ban Nhap Lua Chon: ";
	cin>>luachon;
	if(luachon==1)
	{
		nhap(mt,n);
	}
	else if(luachon==2)
	{
		cout<<"Danh Sach Vua Nhap: \n";
	tieude();
	xuatdanhsach(mt,n);
	}
	else if(luachon == 3)
	{
		cout<<"Danh Sach Cac Ma Hang Co Don Gia <600$ : \n";
	tieude();
	timkiemnhohon600do(mt,n);
	}
	else if(luachon ==4)
	{
		sapxep(mt,n);
		tieude();
		xuatdanhsach(mt,n);
	}
	else if(luachon==0)
	{
		return 0;
	}
	else
	{
		cout<<"Lua Chon Khong Ton Tai!\n";
	}
	goto nhaplai;
	
	
	
}