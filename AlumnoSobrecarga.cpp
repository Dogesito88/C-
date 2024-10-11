#include <iostream>
#include <string>

using namespace std;

class Alumno {
private:
    string nombre;
    string materia; 

public:
   
    Alumno();

    void mostrarCurso() const;
    void operator=(const string& materia);
};


Alumno::Alumno(){
    nombre = "Juan";
}

void Alumno::mostrarCurso() const {
    cout <<"El curso de " << nombre << " es: " << materia;  
    if (materia == "") {
        cout << "Sin materia";  
    }
    cout << endl;
}

void Alumno::operator=(const string& nuevaMateria) {
    if (materia == "") {
        materia = nuevaMateria; 
    } else {
        cout << "El curso ya tiene una materia." << endl;
    }
}

int main() {
   
    Alumno j;

    j.mostrarCurso();

    j = "Matematicas";
    
    j.mostrarCurso();

    return 0;
}
