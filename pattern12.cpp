/*

*
**
* *
*  *
*   *
******

*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n=6;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==1 || i==j || i==n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}