#include<iostream.h>
int main()
{
	int n;
	cout << "nhap so nguyen duong n: ";
	cin >> n;
	cout << "uoc cua n la: ";
	for (int i = 1; i < n; i++){
		if (n % i == 0){
			cout << i << " "; 
		}	
	} 
    cout << endl; 
} 