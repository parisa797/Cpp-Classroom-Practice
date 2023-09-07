#include<iostream>
#include<string>
using namespace std;

class rac
{
public:

	rac(int t, int a) { assign(t, a); }
	void print();
	void assign(int, int);
	void mohit();
	void masahat();
private:
	int tool;
	int arz;
};

int main()
{
	rac x(2 , 6);
	x.print();
	cout << "mohit =  ";
	x.mohit();
	cout << endl;
	cout << "masahat =  ";
	x.masahat();
	cout << endl;

	system("pause");
	return 0;
}
void rac::assign(int t, int a)
{
	if (t == a)
		cout << "in mostatil nist  " << endl;

	else
	{
		tool = t;
		arz = a;
	}
}
void rac::print()
{
	cout <<"tool = "<< tool << endl  <<"arz ="<< arz << endl;
}
void rac::mohit(){
	int mohit = (2 * tool) + (2 * arz);
	cout << mohit;
}
void rac::masahat(){
	int masahat = tool * arz;
	cout << masahat;
}