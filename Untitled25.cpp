#include<iostream>
 
using namespace std;

int main()
{
	char a[50];
	cout << "Nhap vao chuoi ki tu: " ;
	cin.getline(a,51);
	int j= 0; 
	cout << "so ki tu nguoi dung:";
	for(int i = 0; i < strlen(a); i++){
		if(a[i] != ' '){
			j++; 
		} 
	}
	cout << j << endl; 
}