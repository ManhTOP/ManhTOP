#include <iostream.h>
int main ()
{
   int a; 
   cout << "nhap so nguyen duong a =";
   cin >>a; 
   	for (int i = 2; i < a ; i++ ){
	   	if (a % i == 0){
	   		cout << "a khong la so nguyen to" << endl; 
	   	} 
	   	else {
	   		cout << "a là so nguyen to" << endl; 
	   	} 
	   	return 0; 
   }
	 if (a < 2){
 		cout << "a khong la so nguyen to" << endl; 
 	}
return 0;   
} 