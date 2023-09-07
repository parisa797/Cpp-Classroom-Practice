#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a;
cin >>a;
while (a>0)
{
	cout<< a%10;
a=a/10;
}
}