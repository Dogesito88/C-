#include <iostream>

using namespace std;

//Definicion

// <<-----Poligono----->>
class Poligono{
    protected:
    int a;
    int b;
    public:
    Poligono(int a, int b);
    void setValores(int,int);
};

// <<-----Rectangulo----->>

class Rectangulo : public Poligono{
    public:
    Rectangulo(int a, int b);
    int area();
};

// <<-----Triangulo----->>

class Triangulo : public Poligono{
    public:
    Triangulo(int a, int b);
    int area();
};



//Implementacion

// <<-----Poligono----->>

void Poligono::setValores(int a, int b){
    this->a = a;
    this->b = b;
}

Poligono::Poligono(int a,int b){
    setValores(a,b);
    cout << "Constructor clase poligono" << endl;
}

// <<-----Rectangulo----->>

Rectangulo :: Rectangulo(int a, int b):Poligono(a,b){
    setValores(a,b);
    cout << "Constructor clase Rectangulo" << endl;
}

int Rectangulo :: area(){
    return (a*b);
} 


// <<-----Triangulo----->>

Triangulo :: Triangulo(int a, int b):Poligono(a,b){
    setValores(a,b); //No es necesario poner el void antes
    cout << "Constructor clase Triangulo" << endl;
}

int Triangulo :: area(){
    return (a*b/2);
} 


int main(){

    Rectangulo r(4,5);
    Triangulo t(4,5);

    cout << r.area() << " " << t.area() << endl;

    r.setValores(5,4);
    t.setValores(5,4);

    cout << r.area() << " " << t.area() << endl;
}