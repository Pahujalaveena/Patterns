#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==j || i+j==n+1)
			{
				cout<<"x";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}