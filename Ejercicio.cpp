#include <iostream> 
using namespace std; 

class Punto{
    protected: int x,y;
    public:
    Punto(): x(0),y(0){ }
    Punto(int a, int b): x(a), y(b){}
    virtual void dibujar(){cout << "[" << x << "," << y << "]\n";} //Se quita la funcion virtual pura y se escribe el cuerpo
    virtual void mover(int a, int b){ x += a; y+=b;}
    virtual void mover(int a) { mover(a, 1);}
};

class Punto3d : public Punto{

    protected: int z; //Faltaba protected
    public: 
    Punto3d(int a, int b, int c) : Punto(a,b), z(c){}
    Punto3d() : Punto (1,1) {z= 1;}
    void dibujar(){ cout << "[" << x << "," << y << "," << z << "]\n";}
    void mover(int c) { Punto::mover(1,1); z +=c;} //Se quita el . y se agrega
};

int main(){
    Punto *p = new Punto3d();
    Punto *p1 = new Punto(4,5);
    p->dibujar();
    p1->dibujar();
    p->mover(3);
    p->dibujar();
    ((Punto3d *) p)->mover(5);
    p->dibujar();


    return 0;
}