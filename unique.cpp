#include<iostream>
using namespace std;
int findunique(int a[100],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		t=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i!=j)			
				t=1;
		}
		if(t==0)
		{
			return a[i];
			break;			
		}
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
	cout<<"The unique number is "<<findunique(a,n);
}
