#include<iostream>

using namespace std;
 
int main()
{
 int a[100];
 int n;
 	do{
		cout << "Nhap vao so phan tu cua mang: ";
		cin >> n; 
		if(n <= 0)
		cout << "Ban nhap sai vui long nhap lai! "; 
	}while(n <= 0);
	
	for(int i = 0; i < n; i++){
		cout << "a[" << i << "] =";
		cin >> a[i]; 
	} 
	cout << "Mang vua nhap la: "; 
	for(int i = 0; i < n; i++){
		cout << a[i] << " "; 
	}
	cout << endl;
	
    cout<<"so nguyen to la : ";
	for (int i=0; i < n; i++ ){
		int dem =0; 
		for (int j=1 ;j<=a[i]; j++){
			if(a[i] % j == 0){
				dem++;
			}
		}
		if(dem == 2){
			cout<<a[i]<<" ";
		}
	}
	cout << endl;
	
	cout << "thu tu tang dan la : ";
	for (int i=0; i<n ;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] > a[j]){
				int doi = a[i];
				a[i] = a[j];
				a[j] = doi;
				
			}
		}
		cout << a[i] << " ";
	}
	return 0;
}