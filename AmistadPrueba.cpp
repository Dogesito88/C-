#include <iostream>
using namespace std; 

class Clase2;

class Clase1{
public:
    Clase1():dato(0){}
    int getDato(){return dato;}
private:
    int dato;

    friend class Clase2;
};

class Clase2{
public:
    Clase2(int valor):valor(valor){}
    int dval() {return valor;}
    void func ( Clase1 *ref){ ref->dato = valor;}
private:
int valor;
};

int main (){
    Clase1 *obj1= new Clase1();
    Clase2 *obj2= new Clase2(5);
    cout<< "Obj1: " << obj1->getDato()<< endl;
    obj2->func(obj1);
    cout << "Obj1: " << obj1->getDato()<< endl;
}