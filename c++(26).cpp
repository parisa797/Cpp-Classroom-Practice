#include<iostream>
#include<string>
using namespace std;
class point
{
public:
  point(double c, double d) :x(c), y(d){};
  point(){
    setx(0);
    sety(0);
  };



  void setx(double c);
  void sety(double d);

  double getx() const { return x; }
  double gety()const { return y; }
  void print(){ cout << "( " << getx << " " << gety << ") " << endl; }

private:
  double x, y;

};
void point::setx(double c){

  try{
    if (x < 0 || x > 20){
      throw x;
    }
    x = c;
  }
  catch (double  x){
    cout << "the x is incorrect and x=0! " << endl;
  }


}




void point::sety(double d){

  try{
    if (y< 0 || y> 20){
      throw y;
    }
    y = d;
  }
  catch (double  y){
    cout << "the x is incorrect and x=0! " << endl;
  }

}




point operator+(double number, const point& f)
{
  point temp(number + f.getx(), f.gety);
  return temp;

}
point operator+(const point& f, double number)
{
  point temp(number + f.getx(), f.gety);
  return temp;

}
point operator+(const point& f1, const point& f2)
{
  point temp(f1.getx() + f2.getx, f1.gety + f2.gety);
  return temp;

}

class traiange :public point {
public:

  traiange(double c, double d, double o, double p) : point(c, d), e(o), g(p){};
  void setert(double o);
  void setghae(double p);

  double getghae()const { return g; }
  double getert()const { return e; }


private:
  point center;
  double e, g;



};
void traiange::setghae(double a){


  g = a;

}
void traiange::setert(double a){


  e = a;

}

class hr :public point {
public:

  hr(double c, double d, double o, double p , double l) : point(c, d), e(o), g(p), eh(l){};
  void setert(double o);
  void setghae(double p);
  void seterth(double l);
  double geterth() const { return e; }
  double getghae()const { return g; }
  double getert()const { return eh; }

private:
  point m;
  double eh, g, e;

};
void hr::setghae(double a){


  g = a;

}
void hr::seterth(double a){


  eh = a;

}
void hr::setert(double a){


  e = a;

}

int main()
{

}