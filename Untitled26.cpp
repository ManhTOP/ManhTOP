#include<iostream>
 
using namespace std;

int main()
{
	char a[100];
	cout << "Nhap vao chuoi ki tu" ;
	cin.getline(a,101);
	int b; 
	for(int i=0; i < strlen(a);i++ ){
         for (int j=i+1; j < strlen(a);j++){
            if (a[i]== a[j] && a[i]!=' '){
                b++;
                cout << a[i] << ": " << b <<endl; 
            }
        }
	} 
}