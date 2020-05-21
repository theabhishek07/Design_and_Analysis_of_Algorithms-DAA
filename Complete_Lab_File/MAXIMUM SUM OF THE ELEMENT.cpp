#include<iostream>
using namespace std;
int main()
{   int i,j,sum=0,sum1=0,k,arr1[8];
	int arr[8]={-2,1,7,4,-3,8,-1,-2}; 
	cout<<"your array is"<<endl;
	for(k=0;k<8;k++)
	{
		cout<<arr[k]<<endl;
	}
	for(i=0;i<4;i++)
	{
		sum=sum+arr[i];
	}
		for(j=4;j<8;j++)
	{
	 sum1=sum1+arr[j];
	}
	cout<<"sub array with maximum sum is"<<endl;
	if(sum>sum1)
	{
		cout<<"array is :"<<endl;
		for(i=0;i<4;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"sum of array is :"<<sum<<endl;
		
	}
	else
	{
		cout<<"array is :"<<endl;
		for(j=4;j<8;j++)
	{
	 cout<<arr[j]<<endl;
	 
	}
	cout<<"sum of array is :"<<sum1<<endl;
	}
	
	
	return 0;

}

