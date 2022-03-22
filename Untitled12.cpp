#include<iostream.h>
int main()
{
	//nho can phai co them vi tri cho no lon nhat, nho nhat. 
	int n;
	int arr[100];
	cout << "nhap vao so phan tu cua  mang: ";
	cin >> n;
	if(n <= 0){
		cout << "ban nhap sai, vui long nhap lai";
	} 
	else{
			for(int i = 0; i < n; i++){
	         	cout << "arr[" << i + 1 << "] = ";
		        cin >> arr[i]; 
            	}
	        cout << "mang vua nhap la: "; 
	        for(int i = 0; i < n; i++){
	   	        cout << arr[i] << " "; 
            	}
        	cout << endl;
			 
		    int max = arr[0]; 
			int min = arr[0];
		    cout << "so lon nhat la: "; 
  	        for(int i = 0; i < n; i++){
      	  	     if(max < arr[i]){
     	  	      	max = arr[i];
     	  	      }	  
        	  } 
		     cout << max  << " ";
	         cout << endl;
	         
	        cout << "so nho nhat la: "; 
  	        for(int i = 0; i < n; i++){
      	  	     if(min > arr[i]){
     	  	      	min = arr[i];
     	  	      }	  
        	  } 
		     cout << min  << " ";
	         cout << endl;
	    } 
}
	
 