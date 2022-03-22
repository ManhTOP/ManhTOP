 #include<iostream>
using namespace std;
bool Check(int n){
	if(n%2==0){
		return true;
	}
	return false;
}
int main(){
	int n;
	cout<<"Nhap n";
	cin>>n;
	if(Check(n)==true){
		cout<<"n la so chan";

	}
	else{
		cout<<"n la so le";
	}
	return 0;
}