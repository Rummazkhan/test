#include<iostream>
using namespace std;
int main()
{
	int maths,phy,chem,result,sub2;
	cout<<"----to check eligibility for admission----";
	cout<<"\nwrite your marks:";
	cout<<"\nmarks in maths: ";
	cin>>maths;
	cout<<"marks in physics: ";
	cin>>phy;
	cout<<"marks in chemistry: ";
	cin>>chem;
	result=maths+phy+chem;
	sub2=maths+phy;
	if(maths<65)
	cout<<"your marks in maths needs to be higher than or equal to 65";
	else if(phy<55)
	cout<<"\nyour marks in physics needs to be higher than or equal to 55";
	else if(chem<50)
	cout<<"\nyour marks in chemistry needs to be higher than or equal to 50";
	else if(result<190)
	cout<<"\nyour total marks needs to be higher than or equal to 190 for admission";
	else if(sub2<140)
	cout<<"\nthe combined sum of subjects physics and maths needs to be higher than or equal to 140";
	else 
	cout<<"\nCongratulations You Are Eligible For Admission";
}
