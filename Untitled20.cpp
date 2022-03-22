#include <iostream.h>

using namespace std;

int lapphuong ( int a)
{
   return a*a*a;	
}

int main()
{
	int a; 
	cout << " nhap a :";
	cin>> a;
	cout << "lap phuong cua a la: " << lapphuong(a) << endl;
	return 0;
}