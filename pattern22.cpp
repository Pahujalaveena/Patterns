/*


*
**
***
****
*****
******
*****
****
***
**
*





*/






#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,col=1;
	cout<<"Enter the number:";
	cin>>n;
	
	for(int i=1;i<=n*2;i++)
	{
		for(int j=1;j<=col;j++)
		{
			cout<<"*";
		}
		 if(i<n)
		 {
		 	col++;
		 }
		 else
		 {
		 	col--;
		 }
		 cout<<endl;
	}
}