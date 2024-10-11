#include <iostream>

using namespace std;

// <<-----Definicion----->>

class pareja{
    double a, b;

    public:

    pareja(double, double);
    pareja operator + (pareja);

    friend ostream& operator << (ostream& out, const pareja& p);
};

// <<-----Implementacion----->>

pareja::pareja(double x, double y){
    a = x;
    b = y;
}

pareja pareja:: operator + (pareja p){
    pareja paux(0,0);
    paux.a = a + p.a;
    paux.b = b + p.b;

    return paux;
}

ostream& operator << (ostream& out, const pareja& p){
    out << "(" << p.a << "," << p.b << ")";
    return out;
}

int main(){

    pareja a(50, 75);
    pareja b(150, 175);
    pareja c = a + b;

    cout << "a =" << a << "\n";
    cout << "b =" << b << "\n";
    cout << "c =" << c << "\n";

    return 0;
}