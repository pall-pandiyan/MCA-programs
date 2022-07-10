#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

class equation {
 private:
	float a, b, c;
 public:
	inline void getinfo(float a, float b, float c);
	inline void display();
	inline void equal(float a, float b);
	inline void imag();
	inline void real(float a, float b, float det);
};

inline void equation::getinfo(float aa, float bb, float cc) {

 a=aa;
 b=bb;
 c=cc;
}

inline void equation::display() {
 cout<<"a="<<a<<"\n";
 cout<<"b="<<b<<"\n";
 cout<<"c="<<c<<"\n";
}

inline void equation::equal(float a, float b) {
 float temp = -b/(2*a);
 cout<<"Roots are equal="<<temp<<"\n";
}

inline void equation::imag() {
 cout<<"Roots are imaginary\n";
}

inline void equation::real(float a, float b, float det) {
 float temp = sqrt(det);
 float x1 = (-b+temp)/(2*a);
 float x2 = (-b-temp)/(2*a);
 cout<<"Roots are real\n";
 cout<<"x1="<<x1<<"\n";
 cout<<"x2="<<x2<<"\n";
}

void main(void) {
 class equation eq;
 float aa, bb, cc;
 clrscr();
 cout<<"Enter three numbers: ";
 cin>>aa>>bb>>cc;
 eq.getinfo(aa,bb,cc);
 eq.display();
 if (aa==0) {
  float temp = cc/bb;
  cout<<"linear roots+"<<temp<<"\n";
 }
 else {
  float det = bb*bb-4*aa*cc;
  if (det==0) {
   eq.equal(aa,bb);
  }
  else if (det<0) {
   eq.imag();
  }
  else {
   eq.real(aa,bb,det);
  }
  getch();
 }
}