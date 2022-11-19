/*

      *******
     *******
    *******
   *******
  *******
 *******


*/



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}