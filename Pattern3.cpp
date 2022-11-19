#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int rows,col;
	cout<<"Enter rows and columns"<<endl;
	cin>>rows>>col;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i==0||i==rows||j==0||j==col)
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