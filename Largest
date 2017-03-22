#include<iostream>
using namespace std;
void order(int a[100],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])			
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
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
	order(a,n);
	cout<<"Array elements after arrangement : ";
	cout<<a[0];
	for(i=1;i<n;i++)
		cout<<","<<a[i];
}
