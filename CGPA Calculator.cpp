#include<iostream>
#include<string.h>
using namespace std;
class student
{
	float CGPA,gp;
	int sem;
	char grades[5],name[100];
	public:
		void init()
		{
			CGPA=gp=0.0;
			sem=0;
			strcpy(name,"NULL");
			strcpy(grades,"NULL");
		}
		void accept()
		{
			cout<<"Student name : ";
			cin>>name;
			cout<<"Semester : ";
			cin>>sem;
			for(int i=0;i<5;i++)
			{
				cout<<"Grade in "<<i+1<<" subject : ";
				cin>>grades[i];
			}
		}
		void display()
		{
			cout<<"\nName   : "<<name<<"\nGrades :";
			for(int i=0;i<5;i++)
				cout<<" "<<grades[i];
			cout<<"\nCGPA   : "<<CGPA;
		}
		void grade_conv()
		{
			float res=0.0;
			for(int i=0;i<5;i++)
			{			
				if(grades[i]=='A')
        		    gp=4.0;		
				if(grades[i]=='B')
        		    gp=3.0;		
				if(grades[i]=='C')
        		    gp=2.0;		
				if(grades[i]=='D')
        		    gp=1.0;		
				if(grades[i]=='F')
        		    gp=0.0;
				res+=gp;
			} 			
            CGPA=res/sem;
		}		
};
int main() 
{	
    int n,i;
    student a[100];
    cout<<"Enter number of students ";
    cin>>n;
    cout<<"Enter student details\n";
    for(i=0;i<n;i++)
    {
    	cout<<"Student "<<i+1<<endl;
    	a[i].accept();
    	a[i].grade_conv();
	}    
    for(i=0;i<n;i++)
    {
    	cout<<"\nStudent "<<i+1<<" :";
		a[i].display();
	}
}
