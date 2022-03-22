#include<iostream.h>
#include<math.h> 
int main()
{
	int n;
	int arr[100];
	cout << "nhap so luong phan tu ";
	cin >> n;
	for (int i = 0; i < n ; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];  
	}
	cout << "mang vua nhap la: " ;
	for (int i = 0; i < n ; i++){
		cout << arr[i] << " "; 
	}
	cout << endl;
	 
	cout << "cac so chan la: ";
	for (int i = 0; i < n; i++){
     	if (arr[i] % 2 == 0){
			cout << arr[i] << " "; 
	   } 
	}
	cout << endl;

	//for (int i = 0; i < n ; i++){
       // for(int j = i + 1; j < n; j ++) {
            //if (arr[i] > arr[j]) {
               // int temp = arr[i];
               // arr[i] = arr[j];
                //arr[j] = temp;
//            }
//        }
//   }
    cout << "mang sau khi xep: " ; 
    for (int i = 0; i < n ; i++){
        for(int j = i + 1; j < n; j ++) {
            if (arr[i] > arr[j]) {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j]; 
			  
            } 	  
        }cout << arr[i] << " "; 		 
    }
    cout << endl; 
} 