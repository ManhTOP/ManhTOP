#include<iostream.h>
#include<fstream.h>

main(){
	fstream doctep("in1.txt", ios :: in);
	int a[5];
	cout<<"\n DOC TEP "<<endl;
	
	for(int i=0;i<5;i++){
		cout<<"\na["<<i+1<<"]=";
		doctep>>a[i];
		cout<<a[i]<<" ";
	}
	int min = a[0], max = a[0];
	for(int i=0;i<5;i++)
	{
		if(min > a[i]){
			min = a[i];
		}
		if(max < a[i]){
			max = a[i];
		}
	}
	cout<<"\n\nMIN = "<<min<<"\t MAX = "<<max<<endl;
	ofstream ghitep("out1.txt", ios::out);
	ghitep<<"\nMIN = "<<min<<"\t MAX = "<<max;
	cout<<"\nGHI TEP THANH CONG"<<endl;
}