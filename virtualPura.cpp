#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class figura{
    int x, y;
    public:
    figura();
    virtual void calcularArea() = 0;

};

figura::figura(){
    x = 0;
    y = 0;
}

class circulo : public figura{
    float radio;
    public:
    circulo();
    void calcularArea();
};

circulo::circulo(){
    radio = 2;
}

void circulo::calcularArea(){
    float area = (float) 3.14 *pow(radio,2);
    cout << "\nEl area es: " <<  area;
}

int main(){
    // figura obj; error una clase abstracta no se puede instanciar
    circulo obj;
    obj.calcularArea();
    getch();

    return 0;
}