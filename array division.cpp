#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,f,s=0;
    float average;
	cout<<"Enter the array limit : ";
	cin>>n;
	cout<<"Enter array elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	average=(float)s/n;
	s=a[0];
	for(i=1;i<n-1;i++)
	{
    	s+=a[i];
    	if(average==(float)s/(i+1))
	        cout<<"Divide at "<<i+1<<endl;
	    if(average!=(float)s/(i+1)&&i==n-1)     
	    	cout<<"Array division not possible";
    }
}
