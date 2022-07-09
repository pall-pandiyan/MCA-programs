#include<iostream>
#include<math>

using namespace std;

class equation {
    private:
        float a, b, c;
    public:
        inline void get_data(float a, float b, float c);
        inline void display();
        inline void equals(float x, float y);
        inline void imag();
        inline void equation::real(float a, float b, float det);
};

inline void equation::get_data(float x, float y, float z) {
    a = x;
    b = y;
    c = z;
}

inline void equation::display() {
    std::cout<<"a: "<<a<<"\n";
    std::cout<<"b: "<<b<<"\n";
    std::cout<<"c: "<<c<<"\n";
}

inline void equation::equals(float a, float b) {
    float temp = -b/(2*a);
    std::cout<<"Roots are equals="<<temp<<"\n";
}

inline void equation::imag() {
    std::cout<<"Roots are imaginary\n";
}

inline void equation::real(float a, float b, float det) {
    float x1, x2;
    float temp = sqrt(det);
    x1 = (-b+temp)/(2*a);
    x2 = (-b-temp)/(2*a);
    std::cout<<"x1="<<x1<<"\n";
    std::cout<<"x2="<<x2<<"\n";
}

int main(void) {
    class equation eq;
    float aa, bb, cc;
    std::cout<<"Enter three numbers: ";
    std::cin>>aa>>bb>>cc;
    eq.get_data(aa, bb, cc);
    eq.display();
    
    if (aa == 0) {
        float temp = cc/bb;
        std::cout<<"linear roots=\n";
    }
    else {
        float det = (bb*bb) - (4*aa*cc)
        if (det == 0) {
            eq.equals(aa,bb)
        }
        else if(det<0) {
            eq.imag();
        }
        else {
            eq.real(aa, bb, det);
        }
    }
}