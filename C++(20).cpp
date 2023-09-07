#include<iostream>
#include<iomanip>
using namespace std;
double integerpower (float base,float exponent)
{
	float result=1;
	for (int i=1;i<=exponent;i++)
	{
		result=result*base;
	}
	return result;
}
int main( )
{
	int base[]={1,2,3,4,5,6,7,8,9,10};
	int exponent[]={3,4,5,6,7,8,9,10,11,12};
	cout<<"base"<<setw(17)<<"result"<<endl;
	for (int i=0;i<10;i++)
	{	cout<<setw(4)<<base[i]<<setw(15)<<exponent[i]<<setw(15)<<integerpower(base[i],exponent[i])<<endl;
	}
}