#include<iostream>
#include<conio.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i = 1; i <= n; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void xuat(int a[],int n)
{
	for (int i= 1;i <= n; i++)
	{
		cout << " " << a[i];
	}
}
void timam(int a[],int n)
{
	for (int i= 1 ; i <= n; i++)
	{
	    if( a[i] < 0)
	    {
		cout << "\ta[" << i << "] = " << a[i];
		cout << endl;
	    }	
	}	
}
void swap(int &a, int &b)
{
	int tg = a;
	a=b;
	b=tg; 
} 
void sapxep(int a[],int n)
{	
	for(int i = 1; i <= n - 1; i++)
	{
		for(int j = i + 1; j <= n ; j++)
		{
			if(a[i] > a[j])
			{
              swap(a[i],a[j]); 
			}	
		}
	}
}
int main()
{
	int a[100];
	int n;
		cout << " Nhap n = ";
		cin >> n;
	    if (!(cin))
	    {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << " Nhap sai du lieu mang, nhap lai n = ";
		cin >> n;  
	    }
		else if(n <= 0 || n >= 100){
			cout << "Nhap sai du lieu mang, nhap lai n = ";
			cin >> n;
		}
	nhap(a,n);
	cout << "\n Mang da nhap la: " << endl;
	xuat(a,n);
	cout << "\n Cac phan tu la so am trong mang la:" << endl;	
	timam(a,n);
	sapxep(a,n);
	cout << "\n Mang sap xep theo thu tu tang dan:" << endl;
	for(int i = 1;i <= n; i++){
		cout << " "<< a[i];
	}
	cout << endl;
	return 0;
}