#include<iostream>
using namespace std;
int main()
{
int class1[10][4];
float sum=0;
for (int i=0;i<10;i++)
{
for (int j=0;j<4;j++)
{
cout<<"enter daneshjo["<<i+1<<"]"<<"dars["<<j+1<<"]:";
cin>>class1[i][j];
}
}
for (int i=0;i<10;i++)
{
sum=0;
for (int j=0;j<4;j++)
{
sum=sum+class1[i][j];
}
cout<<"avgrage daneshjo"<<i+1<<":"<<sum/4<<endl; 
}
for (int j=0;j<4;j++)
{
sum=0;
for (int i=0;i<10;i++)
{
sum=sum+class1[i][j];
}
cout<<"avgrage dars"<<j+1<<":"<<sum/10<<endl;
}
cout<<endl;
}