#include<iostream>
#include<conio.h>
using namespace std;


void insert(float[], int);
void print(float[], int);
void sort(float[], int);

int main()
{
int x;
float a[100];
int n;
for (;;){
system("cls");
cout << "\t1.add arayy\n";
cout << "\t2.sort arayy\n";
cout << "\t3.print arayy\n";
cout << "\t4.exit";
cin >> x;
switch (x)
{

case 1:

system("cls");
cout << "enter number of digits:";
cin >> n;
cout << "\n\n";
insert(a, n);
getchar();
break;
case 2:
system("cls");

sort(a, n);
cout << "!~ arayy sorted ~!";
getchar();
break;
case 3:
system("cls");
cout << "\n\n" << "after sort arayy is:\n\n";
print(a, n);
getchar();
break;
case 4:
exit(0);

default:
break;
}
getchar();

}
} 

void insert(float a[], int n)
{
for (int i = 0; i<n; i++)
{
cout << "a[" << i << "]=";
cin >> a[i];
}
}


void sort(float a[], int n)
{
float temp;
int i, j;
for (i = 1; i<n; i++)
{
for (j = 0; j<n - i; j++)
{
if (a[j]>a[j + 1])
{
temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}
}


void print(float a[], int n)
{
for (int i = 0; i<n; i++)
cout << a[i] << ',';
}