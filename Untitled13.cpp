#include<iostream.h>
int main()
{
	int a[100];
	int n;
	do{
		cout << "Nhap vao so phan tu trong mang: ";
		cin >> n;
		if(n <= 0)
		   cout << "Ban nhap sai vui long nhap lai! \n";
		}while (n <= 0)    
	
	for(int i = 0; i < n; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	} 
	cout << "\n Mang vua nhap la: "; 
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	
	int m;
	cout << "\n nhap vao so can tim: ";
	cin >> m;
	cout << "\n so can tim la: ";
	for(int i = 0; i < n; i++){
		if(m == a[i]){
			cout << "a[" << i << "]="; 
			cout << a[i]; 
		}
		else {
			cout << "khong ton tai trong mang ";
		
		} 	break; 
	} 
	cout << "\n";	
} 