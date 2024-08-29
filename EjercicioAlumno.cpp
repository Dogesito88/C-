#include <iostream>

using namespace std;

//Definición

// <<-----Maestro----->>

class Maestro{

    private:

    string nombre;
    int matricula;
    string materia;
    string diaAsignado;

    public:
    
    Maestro(string, int, string);

    string devolverNombre();
    int devolverMatricula();
    string devolverMateria();
    string devolverDiaAsignado();
   
   void capturarMateria(string);
   void mostrarInfo();
};

//<<-----Director----->>

class Director{

    private:

    string nombre;
    string facultad;

    public:
    
    Director(string, string);

    string devolverNombre();
    string devolverFacultad();
   
    void capturarNombre(string);
    void capturarFacultad(string);
   
   void asignarMateria(Maestro& maestro,string);
   
};

//<<-----Alumno----->>

class Alumno{

    private:
 
    string nombre;
    int edad;
    int matricula;
    string facultad;
    string materia1;
    string materia2;
    string materia3;

    public:
    
    Alumno(string, int, int , string, string, string, string); //se añade el maestro

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

Director :: Director(string nom, string f){
    nombre = nom;
    facultad = f;
}

string Director :: devolverNombre(){
        return nombre;
}

string Director :: devolverFacultad(){
        return facultad;
}

void Director:: capturarNombre(string nom){
    nombre = nom;
}

void Director :: capturarFacultad(string f){
    facultad = f;
}

void Director :: asignarMateria(Maestro& maestro,string mt){
    maestro.capturarMateria(mt);
}

// <<-----Maestro----->>

Maestro :: Maestro(string nom, int mtr, string a){
    nombre = nom;
    matricula = mtr;
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

void Maestro :: capturarMateria(string mt){
    materia= mt;
}

void Maestro::mostrarInfo() {
    cout << "Nombre del Profesor: " << devolverNombre() << endl;
    cout << "Materia: " << devolverMateria() << endl;
}

//<<-----Alumno----->>

Alumno :: Alumno(string nom, int ed, int mtr, string f, string mt1, string mt2, string mt3){ 
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
}

int main(){

    Maestro j("Juan Perez", 123456, "Lunes");

    Alumno c("Carlos Lopez", 20, 123456, "Ciencias de la computacion", "Matematicas", "Fisica", "Programacion");

    Director d("Enrique", "Ciencias de la computación");
   
    d.asignarMateria(j,"Matematicas");

    j.mostrarInfo();

    return 0;
}