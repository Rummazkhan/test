#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	double cgpa,points=0,total_credits=0,credit,total;
	string grade;
	int i=0,n;
	cout<<"-----calculate CGPA-----";	
	cout<<"\nenter no. of your courses: ";
	cin>>n;
while(i<n)
	{
		i++;
		cout<<"\nenter your grade in subject "<<i<<":";
		cin>>grade;
		if(grade=="A")
		{
			total=4.0;
		}
		else if(grade=="A-")
		{
			total=3.75;
		}
		else if(grade=="B+")
		{
			total=3.50;
		}
		else if(grade=="B")
		{
			total=3.0;
		}
		else if(grade=="C+")
		{
			total=2.50;
		}
		else if(grade=="C")
		{
			total=2.0;
		}
		else if(grade=="D+")
		{
			total=1.50;
		}
		else if(grade=="D")
		{
			total=1.0;
		}
		else if(grade=="F")
		{
			total=0.00;
		}
		cout<<"\nenter credit hour of this subject: ";
		cin>>credit;
		points=points+(total*credit);
		total_credits=total_credits+credit;
	}
	cgpa=points/total_credits;
	cout<<setprecision(3);
	cout<<"\n\tYOUR CGPA IS "<<cgpa;
}
