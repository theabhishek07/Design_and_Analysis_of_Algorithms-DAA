#include <iostream>
using namespace std;

int main()
{
    int n, sum=0,m; 
    cout<<"Enter how many numbers for input"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Implementing bubble sort"<<endl;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
    //for(int i=0;i<n;i++)
    //    cout<<arr[i]<<endl;
    cout<<"Largest number is "<<arr[n-1]<<endl;
    int k = arr[n-1]; 
    while(k>0)    
    {    
        m=k%10;    
        sum=sum+m;    
        k=k/10;    
    }    
    cout<<"The sum of the digit of the largest digit number is "<<sum<<endl;    
    return 0;
}

