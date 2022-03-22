#include<iostream.h>
using namespace std;
int main()
{ 
	int a,b,c, max; 
	cout <<"nhap a = "; 
	cin>> a; 
	cout <<"nhap b = ";
	cin>> b; 
	cout <<"nhap c = ";
	cin>> c;
	max = a;
	if( max<b ){
		max = b; 
	} 
	if( max<c ){
		max = c; 
	} 
	cout<<" so lon nhat la " << max << endl; 
	return 0;
} 