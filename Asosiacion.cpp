#include <iostream>

using namespace std;

class B {
private:
    string atributoB;

public:
    B(string valor) : atributoB(valor) {}

    string getAtributoB(){
        return atributoB;
    }
};

class A {
private:
    B b;  // Asociación: A tiene una instancia de B

public:
    A(B objetoB) : b(objetoB) {}

    void usarAtributoB() {
        cout << "Usando atributo de B: " << b.getAtributoB() << endl;
    }
};

int main() {
    B b("Valor del atributo B");
    A a(b);

    a.usarAtributoB();

    return 0;
}
