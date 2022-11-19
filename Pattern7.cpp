/*

0
1 0
0 1 0
1 0 1 0
0 1 0 1 0
1 0 1 0 1 0
0 1 0 1 0 1 0


*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if((i+j)%2==0)
			{
				cout<<"1"<<" ";
			}
			else
			{
				cout<<"0"<<" ";
			}
		}
		cout<<endl;
	}
}