#include <iostream>

using namespace std;

int main(){
    
    int i = 5;
    int *p, *q;
    p = &i;
    q = p;

    cout << "El valor de i es : " << i << endl;
    cout << "La direccion de memoria de i es: " << &i << endl;
    cout << "La direccion de memoria almacenada en p es: " << p << endl;
    cout << "La direccion de memoria almacenada en q es: " << q << endl;

    return 0;
}