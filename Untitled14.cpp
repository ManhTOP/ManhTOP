#include<iostream.h>
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
	
	    bool kt1 = false;
	    bool kt2 = false; 
//tim phan tu chan o vi tri le.	    
	    cout << "Cac phan tu chan o vi tri le: "; 
	         for(int i = 0; i < n; i++){
		         if(a[i] % 2 == 0 && i % 2 != 0){
        		 	cout << "a[" << i << "] = ";
		        	cout << a[i] << "    ";
		         	kt1 = true;  
	           	} 
	         }
	       if(kt1 == false){
		      cout << "khong tim thay trong mang"; 
	       }  
	       cout << endl;
	
//tim phan tu le o vi tri chan. 
                cout << "Cac phan tu le o vi tri chan: ";
	             for(int i = 0; i < n; i++){
                     if(a[i] % 2 != 0 && i % 2 == 0 && i != 0){
		             	cout << "a[" << i << "] = ";
		            	cout << a[i] << "    ";
			            kt2 = true; 
		             }
                 }
	             if (kt2 == false){
		          cout << "Khong tim thay trong mang";
               	 } 
                  cout << endl;
	return 0; 
} 