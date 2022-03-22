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
void tangdan(int a[],int n)
{
	for(int i= 1; i <= n ; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{				
			if(a[i]%2 == 0 && a[j]%2 == 0 && a[i] < a[j])
			{
              swap(a[i],a[j]); 
			}				
		}
	}
}
void giamdan(int a[],int n)
{
	for(int i= 1; i <= n ; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{				
			if(a[i]%2 != 0 && a[j]%2 !=0 && a[i] < a[j])
			{
				swap(a[i],a[j]);
			}				
		}
	}
}
void kiemtra(int a[],int n)
{
	int s;
	int dem=0;
	cout << "Nhap vao so can kiem tra: ";
	cin >> s;
	for(int i = 1; i <= n;i++)
	{
		if(a[i]!=s)
		{
		 dem ++;	
		}
	}
	if(dem == n){
		cout << "Phan tu khong ton tai trong mang !" << endl;
	}
	else
	{
		cout << "Mang sau khi xoa phan tu " << s << ":" << endl; 
	for(int i = 1; i <= n;i++)
	{
		if(a[i]!=s)
		{
		 cout << a[i] << " ";	
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
	cout << "\n Mang sap xep theo thu tu tang dan:" << endl;
	sapxep(a,n);	
	for(int i = 1;i <= n; i++){
		cout << " "<< a[i];
	}
	cout << endl;
	cout << "\n Mang cac phan tu chan tang dan la:" << endl;
	tangdan(a,n);	
	for(int i = 1;i <= n; i++){
		if(a[i]%2==0)
		cout << " "<< a[i];
	}
	cout << endl;
	cout << "\n Mang cac phan tu le giam dan: " << endl;
	giamdan(a,n);
	for(int i = 1;i <= n; i++){
		if(a[i]%2 !=0)
		cout << " "<< a[i];
	}
	cout << endl;
	kiemtra(a,n);	
	return 0;	
}