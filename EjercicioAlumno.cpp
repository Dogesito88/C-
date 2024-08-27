#include <iostream>

using namespace std;

//Definición

//<<-----Director----->>

class Director{

    private:

    string nombre;
    string facultad;
    string diaAsignado;

    public:
    
    Director(string, string, string);

    string devolverNombre();
    string devolverFacultad();
    string devolverDiaAsignado();
   
    void obtenerNombre(string);
    void obtenerMatricula(int);
    void obtenerMateria(string);
    void obtenerDiaAsignado(string);
   
   void mostrarCurso();
   
};

// <<-----Maestro----->>

class Maestro{

    private:

    string nombre;
    int matricula;
    string materia;
    string diaAsignado;

    public:
    
    Maestro(string, int, string, string);

    string devolverNombre();
    int devolverMatricula();
    string devolverMateria();
    string devolverDiaAsignado();
   
   void mostrarCurso();
   
};

//<<-----Alumno----->>

class Alumno{

    private:

    Maestro maestro; 
    string nombre;
    int edad;
    int matricula;
    string facultad;
    string materia1;
    string materia2;
    string materia3;

    public:
    
    Alumno(Maestro, string, int, int , string, string, string, string); //se añade el maestro

    string devolverNombre();
    int devolverEdad();
    int devolverMatricula();
    string devolverFacultad();
    string devolverMateria1();
    string devolverMateria2();
    string devolverMateria3();
   
   void mostrarCurso();
   
};
//Implementación

//<<-----Director----->>


// <<-----Maestro----->>

Maestro :: Maestro(string nom, int mtr, string mt, string a){
    nombre = nom;
    matricula = mtr;
    materia = mt;
    diaAsignado = a;
}

string Maestro :: devolverNombre(){
        return nombre;
}

int Maestro :: devolverMatricula(){
        return matricula;
}

string Maestro :: devolverMateria(){
        return materia;
}

string Maestro :: devolverDiaAsignado(){
        return diaAsignado;
}

//<<-----Alumno----->>

Alumno :: Alumno(Maestro m,string nom, int ed, int mtr, string f, string mt1, string mt2, string mt3): maestro(m){ //inicializar maestro
    nombre = nom;
    edad = ed;
    matricula = mtr;
    facultad = f;
    materia1 = mt1;
    materia2 = mt2;
    materia3 = mt3;
}

string Alumno :: devolverNombre(){
    return nombre;
}

int Alumno :: devolverEdad(){
    return edad;
}

int Alumno :: devolverMatricula(){
    return matricula;
}

string Alumno :: devolverFacultad(){
    return facultad;
}

string Alumno :: devolverMateria1(){
    return materia1;
}

string Alumno :: devolverMateria2(){
    return materia2;
}

string Alumno :: devolverMateria3(){
    return materia3;
}

void Alumno::mostrarCurso() {
    cout << "Nombre del Alumno: " << devolverNombre() << endl;
    cout << "Materia 1: " << devolverMateria1() << endl;
    cout << "Profesor: " << maestro.devolverNombre() << endl;
}

int main(){

    Maestro j("Juan Perez", 123456, "Matematicas", "Lunes");

    Alumno c(j,"Carlos Lopez", 20, 123456, "Ingenieria", "Matematicas", "Fisica", "Programacion");

   
    c.mostrarCurso();

    return 0;
}