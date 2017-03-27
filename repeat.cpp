#include<iostream>
using namespace std;
int repeat(int a[100],int n)
{
	int i,j,t1,t2,k=0,b[100][10];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i<j)
			{
				b[k][0]=a[i];
				b[k++][1]=j;
			}
		}		
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{			
			if(b[i][1]<b[j][1])			
			{
				t1=b[i][0];
				t2=b[i][1];
				b[i][0]=b[j][0];
				b[i][1]=b[j][1];				
				b[j][0]=t1;
				b[j][1]=t2;
			}
		}
	}
	return b[0][0];
}
int main()
{
	int a[100],n,i;
	cout<<"Enter the array limit : ";
	cin>>n;
	cout<<"Enter array elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"The first repeated number is "<<repeat(a,n);
}
