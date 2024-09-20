#include <iostream>
#include <math.h>

using namespace std;

// <<-----Definicion----->>

class Punto{

    private:

    float x, y;

    public:

    Punto(float a, float b);
    
    void visualizar();

    friend float distancia (Punto p1, Punto p2);

};

// <<-----Implementacion----->>

Punto::Punto(float a, float b){
    x = a;
    y = b;
}

void Punto::visualizar(){
    cout << x << " " << y << endl;
}

float distancia (Punto p1, Punto p2){
    float d;
    d= sqrt(pow  (p2.x - p1.x , 2 ) + pow ( p2.y - p1.y , 2 ));
    return d;
}

int main (){

    float dist;
    
    Punto c1(3,2), c2 (2,1);

    dist = distancia(c1,c2);

    cout << dist;

    return 0;

}