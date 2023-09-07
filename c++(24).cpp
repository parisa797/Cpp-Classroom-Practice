#include <iostream>
#include <cstdlib>
using namespace std;

class time {
public:
	time(int h = 1 , int m = 1, int s = 1);
	time(const time& r) : hour(r.hour), minute(r.minute),saniye(r.saniye) { }
	void settime(int h, int m, int s);
	void printtime();
	bool equals(time d);
	int gethour() { return hour; }
	int getminute() { return minute; }
	int getsaniye() { return saniye; }
private:
	int hour;
	int minute;
	int saniye;
};

time::time(int h, int m, int s)
{
	settime(h, m, s);
}


void time::settime(int h, int m, int s)
{
	if (h > 24 || m > 60 || s > 60 )
		abort();
	else {
	hour = h;
	minute = m;
	saniye = s;
	}
	
}


void time::printtime()
{
	cout << hour << ':' << minute << ':' << saniye << endl;
}

int timeCompare(time d1, time d2) {

	if (d1.gethour()>d2.gethour())
		return 1;
	else if (d1.gethour()<d2.gethour())
		return -1;
	else
	{
		if (d1.getminute()>d2.getminute())
			return 1;
		else if (d1.getminute()<d2.getminute())
			return -1;
		else
		{
			if (d1.getsaniye()>d2.getsaniye())
				return 1;
			else if (d1.getsaniye()<d2.getsaniye())
				return -1;
			else
				return 0;
		}

	}
}

int main()
{
	time a(5, 5, 5);
	a.printtime();
	time b(2, 5, 5);
	b.printtime();
	int compare = timeCompare(a, b);
	if (compare == -1){
		cout << "second is bigger than fist" << endl;
	}
	 if (compare == 1){
		cout << "first is bigger than second" << endl;
	}
	 if (compare == 0){
		cout << "two time are equal" << endl;
	}system("pause");
	return 0;
	
}