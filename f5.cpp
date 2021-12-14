#include<iostream>
using namespace std;
int main()
{
	int n,temp,x,i,j;
	cout<<"enter size of your array: ";
	cin>>n;
	cout<<"\n";
	int arr[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter no "<<i+1<<" = ";
		cin>>arr[i];
			if(arr[i]==-99)
		{
			cout<<"value cannot be -99";
			break;
		}
			temp=temp+arr[i];	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{		
			if(arr[j]>arr[j+1])
			{
			x=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=x;
		 	}
		}
	}
	if(temp==-99||arr[0]==-99)
	{
		if(arr[0]==-99||arr[n-1]==-99)
		{
		}
	}
	else
	{
	cout<<"\nsum is "<<temp;
	cout<<"\nsmallest number is "<<arr[0];
	cout<<"\nlargest number is "<<arr[n-1];
	}
}
