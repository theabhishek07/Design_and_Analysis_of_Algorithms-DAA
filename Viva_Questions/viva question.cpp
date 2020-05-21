#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n ,result,c=0;
    cout<<"Enter elements in an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
	    cin>>arr[i];
        c++;
	}
    cout<<"calculating number of sub sets of an array"<<endl;
    result=pow(2,c);
    cout<<"Number of subsets of an n sized array is "<<result<<endl;
    return 0;
}
