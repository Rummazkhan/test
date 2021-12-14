#include<iostream>
#include<string>
using namespace std;
int main()
{
	int x;
	cout<<"enter your budget: ";
	cin>>x;
	string name;
	int n,price,X;
	cout<<"your total bugdet is "<<x<<"$";
	cout<<"\nenter how many stuff you want to pay for:  ";
	cin>>n;
	for(int i=0;i<n;i++)

	{

		cout<<"\nenter the name of your expense: ";
		cin>>name;
		cout<<"enter the price of your expense: ";
		cin>>price;
		if(price>x)
		{
			cout<<"\nyou don't have enough money to buy "<<name;

		}
		else
		{
		cout<<name<<"="<<price<<"$"	;
		x=x-price;
		}
		cout<<"\nremaining budget: "<<x<<"$\n";
	}
	
}

