#include <iostream.h>

int demkytu(char a[], int b){
	while (a[b] != '\0'){
		b++;
	}
	return b;
}
int main()
{
	char a[20];
	int dem = 0;
	cin.getline(a, 21);
	cout << a << endl;
	cout << "so ky tu trong mang la: " << demkytu(a, dem) << endl;
	return 0;
}