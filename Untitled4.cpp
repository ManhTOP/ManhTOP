#include <iostream.h>
int main()
{
	int x; 
	// nhap 10 lan 
	for (x = 1; x <= 10; x++){
		
		 if (x == 5)
		 break;
		 
		 cout << x << " "; 
	} //ket thuc vong for
	
	cout << "\n broke out of loop when x became" << x << endl;
	
	return 0; 
} 