#include <iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
        Complex(int r=0, int i=0){
            real = r;
            imag = i;
        }
        Complex operator + (Complex &c){              //operator overloading
            Complex result;
            result.real = real+c.real;
            result.imag = imag+c.imag;
            return result;
        }
        void display(){
            cout<<real<<" + i"<<imag<<endl;
        }
};
int main(){
    Complex c1(5, 6), c2(3, 2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}