#include<iostream>
#include<istream>
#include<string>
#include<vector>

using namespace std;

class rac
{
public:


	rac(const rac& r) : tool(r.tool), arz(r.arz){}
	rac(int t=1, int a=0) { assign(t, a); }
	void print();
	void assign(int, int);
	int gettool() { return tool; }
	int getarz() { return arz; }

private:
	int tool;
	int arz;
};
int moraba(rac a){
	if (a.gettool() == a.getarz()){
		return 1;
	}
	else {
		return 0;
	}

}
void rac::assign(int t, int a)
{
		tool = t;
		arz = a;
}
void rac::print()
{
	cout << "(" << tool << "," << arz << ")";
}
int main()
{
	
	
	rac arr[10];
	int tool;
	int arz;
	cout << "ba salam etelaate marbot be 10 adad mostatil ra vared namaeed" << endl;
	for (int i = 0; i < 10; i++){
		cout << "enter tool " << endl;
		cin >>  tool;
		cout << "enter arz " << endl;
		cin >> arz;
		rac x(tool, arz);
		arr[i] = x;
		int ma = moraba(arr[i]);
		if (ma == 1){ cout << "moraba" ; 
		x.print();
		cout << endl;
		}
		else{
		cout << "mostatil" ;
		x.print();
		cout << endl;
		}
			
	}
	vector<rac>myvector(begin(arr), end(arr));

	system("pause");
	return 0;
}

