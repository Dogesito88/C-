#include <iostream>
#include <cstring>

using namespace std;

// <<-----Definicion----->>

class Jugador {

    char nombre[40];
    char equipo[40];
    float promedio;
    
    public: 

    Jugador();
    Jugador(char * n, char * e);

    //Metodo virual

    virtual void calcularPromedio();

    //Otros metodos

    void establecerPromedio(float a);

};

// <<-----Implementacion----->>

Jugador::Jugador(){
    strcpy (nombre , " ");
    strcpy (equipo, " ");
}

Jugador::Jugador(char * n, char * e ){
    strcpy (nombre , n);
    strcpy (equipo , e);
    promedio = 0.0;
}

void Jugador::calcularPromedio(){
    cout << "\nCalcular promedio del jugador" << endl;
}

void Jugador::establecerPromedio(float a){
    promedio = a;
}

// <<-----Definicion----->>

class Bateador: public Jugador{

    int nroVecesBates;
    int nroBoletosRecibidos;
    int nroHits;
    
    public:

    Bateador();
    Bateador(char * n, char * e, int v, int b, int h);

    //Sobrecarga del metodo virtual
    void calcularPromedio();

};

Bateador::Bateador(): Jugador(){
    nroVecesBates = 0;
    nroBoletosRecibidos = 0;
    nroHits = 0;
}

Bateador::Bateador( char * n, char * e, int v, int b, int h): Jugador(n, e){
    nroVecesBates = v;
    nroBoletosRecibidos = b;
    nroHits = h;
}

// <<-----Implementacion----->>

void Bateador::calcularPromedio(){
    float x;
    x = (float) nroHits / (nroVecesBates - nroBoletosRecibidos) * 1000;
    establecerPromedio(x);
    cout << "\nEl promedio del bateador fue: " << x;

    //Si necesita ejecutar calcularPromedio de la clase Padre(Jugador)
    Jugador::calcularPromedio();
}

int main (){

    Jugador a("Roberto Perez", "Cardenales");
    Bateador b("Cesar Isturiz", "Cardenales", 50, 8, 17);
    Jugador *p;

    p= &a;
    p->calcularPromedio();


    p = &b;
    p->calcularPromedio();

    cout << "\nPresione una tecla para continuar" << endl;   

    return 0;
    
}