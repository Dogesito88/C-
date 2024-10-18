#include <iostream>
#include <string>
using namespace std;

// <<-----Definicion----->>

class Materia {
    
    private:
    string nombre; 
    
    public:
    
    Materia(string);  
    string getNombre(); 

};

class Alumno {
    
    private:
    
    string nombre;          
    Materia* materias[5];
    int cantidadMaterias;   
    
    public:
    
    Alumno(string);                
    Alumno operator+(Materia& nuevaMateria);  
    friend ostream& operator << (ostream& out, const Alumno& a);

};

// <<-----Implementacion----->>

Materia::Materia(string n) {
    nombre = n;
}

string Materia::getNombre()  {
    return nombre; 
}


Alumno::Alumno(string n){
    nombre = n;
    cantidadMaterias = 0;
}

Alumno Alumno::operator+(Materia& nuevaMateria) {
    if (cantidadMaterias < 5) {
        materias[cantidadMaterias] = &nuevaMateria;
        cantidadMaterias++;
    } else {
        cout << "No se pueden agregar mas materias." << endl;
    }
    return *this; 
}

ostream& operator << (ostream& out, const Alumno& a) {
    out << "Alumno: " << a.nombre << endl;
    out << "Materias inscritas:" << endl;
    for (int i = 0; i < a.cantidadMaterias; ++i) {
        out << i+1 <<"- " << a.materias[i]->getNombre() << endl;
    }
    return out; 
}

int main() {
  
    Materia mt("Matematicas");
    Materia p("POO");
    Materia d("DHPC");
    
    Alumno a("Juan");

    a + mt; 
    a + d; 
    a + p;

    cout << a;
    
    return 0;
}
