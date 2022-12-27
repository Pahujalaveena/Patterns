#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number!"<<endl;
	cin>>n;
	for(int i=1;i<n;i++)
	{
	    for(int j=i;j<=i;j++)
	    {
	    	cout<<" ";
		}
	    for(int i=0;i<=n;i++)
	    {
		    cout<<"*";
	    }
	    cout<<endl;
	}

	
}