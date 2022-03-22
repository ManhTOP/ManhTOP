#include<iostream.h> 
int main()
{
	int a[100];
	int n;
	do{
	    cout << "\n nhap vao so phan tu cua mang: ";
		cin >> n;
		if (n <= 0)
			cout << "\n ban nhap sai, vui long nhap lai: ";  
	} while(n <= 0);
	 
	for(int i = 0; i < n; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];  
	}  
	cout << "\n mang vua nhap la: "; 
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}

	int m;
	cout << "\n nhap vao so can tim: "; 
	cin >> m;
	cout << "so can tim trong mang la: ";
	for (int i = 0; i < n; i++){
	     
		    if(m = a[i]){
 		  cout << "a[" << i << "] ="<< a[i];
 		} 
 	 
	} 

    
} 