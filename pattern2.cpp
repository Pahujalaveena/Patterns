/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/


#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the number:"<<endl;
	int num;
	cin>>num;
	for(int i=1;i<num;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}