#include<iostream.h>
int main()
{
	int n;
	int a = 0; 
	int arr[100]; 
	cout << "nhap vao so luong phan tu trong mang: ";
	cin >> n;
	if (n <= 0){
		cout << "ban nhap sai, vui long nhap lai: "; 
	} 
	else{
		for(int i = 0; i < n ; i++){
			cout << "arr [" << i + 1 << "] =";
			cin >> arr[i];  
		}
		cout << "mang vua nhap la: ";	
		for (int i = 0; i < n; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
        for(int i = 0; i < n; i++){
        	int b = 0; 
			for(int m = 2; m < arr[i]; m++){
				if(arr[i] % 2 ==0 ){
			        b ++; 
				} 
			} 
			if(b == 0 && arr[i] >= 2){
				 a++; 
			}   
        }
		cout << "so luong so nguyen to trong mang la: " << a; 
		cout << endl;  
       
	} 	 
} 