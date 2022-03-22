#include <iostream.h>
int main()
{ 
	
	for (int x = 1; x <= 10; x++){
		
		 if (x == 5)
		 continue;
		 
		 cout << x << " "; 
	}
	
	cout << "\n Used continue to skip printing the value 5"  << endl;
	
	return 0; 
} 