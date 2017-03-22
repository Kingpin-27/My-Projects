#include<iostream>
using namespace std;
void order(int a[100],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])			
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
void index(int a[100],int n) 
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==i)
			cout<<"\nThe number "<<i<<" equals its index "<<i;
	}
}
int main()
{
	int a[100],n,i;
	cout<<"Enter the array limit : ";
	cin>>n;
	cout<<"Enter array elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	order(a,n);	
	index(a,n);	
}
