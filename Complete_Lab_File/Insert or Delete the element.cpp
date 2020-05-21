#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,3,4,5},i,insert,pos;
	cout<<"enter the element to be inserted"<<endl;
	cin>>insert;
	cout<<"enter the position where to insert(index)"<<endl;
	cin>>pos;
for(i=5; i>pos; i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=insert;
	cout<<"Element inserted \n";
	cout<<" new array is : \n";
	for(i=0; i<5+1; i++)
	{
		cout<<a[i]<<" ";
	}	
	return 0;
}

