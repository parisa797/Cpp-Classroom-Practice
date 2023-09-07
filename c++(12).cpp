#include <iostream>
using namespace std;
int main()
{
 int array1[10]={0};
 int array2[10]={0};
 int array3[20]={0};
 int array4[10]={0};
 int y; 
 for(int i=0;i<10;i++)
 {
  cout<<"array1["<<i +1<<"]:";
  cin>>array1[i];
 }
 for(int i=0;i<10;i++)
 {
  cout<<"array2["<<i +1<<"]:";
  cin>>array2[i];
 }
 for(int k=0;k<9;k++)
 {
  for(int j=0;j<9-k;j++)
  {
   if(array1[j]>array1[j+1])
   {
    int temp=array1[j];
    array1[j]=array1[j+1];
    array1[j+1]=temp;
   }
  }
 }
 for(int k=0;k<9;k++)
 {
  for(int j=0;j<9-k;j++)
  {
   if(array2[j]>array2[j+1])
   {
    int first=array2[j];
    array2[j]=array2[j+1];
    array2[j+1]=first;
   }
  }  
 }
 cout<<"eshterak is:";

 for (int acount=0;acount<10;acount++)
 {
  for(int j=0;j<10;j++)
  {
   if( array1[acount]==array2[j])
   {
    array4[acount]=array1[acount];
    cout<<array4[acount]<<",";
   }
  
  }
 } 
     cout<<endl<<"ejtemah is:";
 for (int s=0;s<10;s++)
 {
  if (array1[s]!=array4[s])
  {
  array3[s]=array1[s];
  cout<<array3[s]<<",";
  }
 }
 for (int f=10;f<20;f++)
 {
  
  array3[f]=array2[f-10];
  cout<<array3[f]<<",";
 } 
 cout<<endl;
}