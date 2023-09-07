#include <iostream>
using namespace std;
bool aval(int n)
{
 int s=-1;
 for(int i=2;i<n;i++)
 {
  if(n%i==0)
  {
   s++;
  }
 }
 if(s==-1)
 {
  return true;
 }
 else
 {
  return false;
 }
}
void maghsom(int n)
{
 for(int i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   cout<<i<<",";
  }
 }
 cout<<endl;
}
int main()
{
 int n;
 while(n!=-1)
 {
  cout<<"enter number";
  cin>>n;
  if(aval(n))
  {
   cout<<"aval ast";
  }
  else
  {
   maghsom(n);

  }
 }
 return 0;
}