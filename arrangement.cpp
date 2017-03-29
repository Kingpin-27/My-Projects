#include<iostream>
using namespace std;
int dtob(int m)
{
	int i,p=1,k=0;
	for(i=m;i>0;i/=2)
	{
		p=i%2;
		if(p==1)
			k++;			
	}
	return k;
}
void arrange(int b[100][2],int k)
{
	int i,j,t1,t2;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{			
			if(b[i][1]>b[j][1]&&b[i][1]!=b[j][1])			
			{
				t1=b[i][0];
				t2=b[i][1];
				b[i][0]=b[j][0];
				b[i][1]=b[j][1];				
				b[j][0]=t1;
				b[j][1]=t2;
			}
			if(b[i][1]==b[j][1])
			{
				if(b[i][0]>b[j][0])							
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
	}
}
int main()
{
	int a[100][2],n,i;
	cout<<"Enter the array limit : ";
	cin>>n;
	cout<<"Enter array elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i][0];
		a[i][1]=dtob(a[i][0]);
	}
	arrange(a,n);
	cout<<"The arranged numbers are "<<a[0][0];
	for(i=1;i<n;i++)
		cout<<","<<a[i][0];
}
