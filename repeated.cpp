#include<iostream>
using namespace std;
void repeated(int a[100],int n)
{
	int i,j,t1,t2,k=0,b[100];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i!=j&&i<j)
				b[k++]=a[i];
		}		
	}	
	cout<<b[0];
	for(i=1;i<k;i++)
			cout<<","<<b[i];
}
int main()
{
	int a[100],n,i;
	cout<<"Enter the array limit : ";
	cin>>n;
	cout<<"Enter array elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"The repeated numbers are ";
	repeated(a,n);
}
