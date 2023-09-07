#include<iostream>
using namespace std;
int main()
{
	int number;
	int mab;
	int i;
	int mabna[20];
	cout<<"enter your number:";
	cin>>number;
	cout<<"enter the mabna:";
	cin>>mab;
	for( i=0;number>0;i++)
	{
		mabna[i]=number%mab;
		number=number/mab;
	}
	cout<<"result is:";
	for( i=i-1;i>=0;i--)
	{
		cout<<mabna[i]<<" ";
	}
	cout<<endl;
}