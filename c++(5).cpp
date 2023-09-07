#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{double a,b,c,t;
cout<<"meghdare a,b,c  ra vared konid    ";
    cin >> a>>b>>c;
    if (a==0)
    cout <<"moadele az noe daraje yek";
else
{t=pow(b,2)-4*a*c;
if (t<0) cout << "moadele javab nadarad";
if (t==0) cout << (b*(-1))/(2*a);
if (t>0) {
        cout << (-1*b-sqrt(t))/(2*a)<<"  "<<(-1*b+sqrt(t))/(2*a);
        }
}

}