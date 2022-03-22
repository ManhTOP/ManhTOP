#include <iostream.h>
 
using namespace std;
int main()
{
	int n;
	int arr[100]; 
	cout << "nhap so luong phan tu: ";
	cin >> n;
	if (n <= 0){
		 cout << "ban nhap sai, vui long nhap lai: "; 
	}
	else{

	for(int i =0; i < n; i++){
		cout << "arr[" << i + 1 << "] =";
		cin >> arr[i]; 
	}
	
	cout << "mang vua nhap: ";
	 for (int i = 0; i < n; i++){
 		cout << arr[i] << " "; 
 	}
 	cout << endl;
 	
      cout << "cac so chia het cho 2 la: "; 
	  for (int i = 0; i < n; i++){
 		if (arr[i]% 2 == 0){
		 	cout << arr[i] << " ";	  
 		}	 
	 }
	 cout << endl;
	 
	}
}