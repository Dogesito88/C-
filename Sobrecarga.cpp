#include <iostream>

using namespace std;

// <<-----Definicion----->>

class Alumno{

    private:
    string nombre;
    int edad;
    int matricula;

    public:
    Alumno();
    Alumno(string,int,int);
    void obtenerNombre(string);
    void obtenerEdad(int);
};

// <<-----Implementacion----->>

Alumno::Alumno(){
    nombre = "Juan Perez";
    edad = 15;
}

Alumno::Alumno(string n, int e, int m){
    nombre = n;
    edad = e;
    matricula = m;
}

void Alumno::obtenerNombre(string nom){
    nombre = nom;
}

void Alumno::obtenerEdad(int ed){
    edad = ed;
}

int main () {

    Alumno p;
    
    Alumno juan("juan",15,2);

    cout << "los elementos fueron borados\n";

    return 0;
}