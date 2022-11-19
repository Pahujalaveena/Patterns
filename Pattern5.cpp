/*


*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/




#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
	int space=(2*n)-(2*i);
	    for(int i=0;i<space;i++)
	    {
	    	cout<<" ";
		}
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
	int space=(2*n)-(2*i);
	    for(int i=0;i<space;i++)
	    {
	    	cout<<" ";
		}
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
}