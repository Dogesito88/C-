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
   void mostrarInfoMaestro();
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
    
    Alumno(string, int, string, string, string, string); 

    string devolverNombre();
    int devolverEdad();
    int devolverMatricula();
    string devolverFacultad();
    string devolverMateria1();
    string devolverMateria2();
    string devolverMateria3();
   
   void  capturarMatricula(int);
   void mostrarInfoAlumno();
   
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
   void asignarMatricula(Alumno& alumno,int);
   void mostrarInfoDirector();
   
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

void Director :: mostrarInfoDirector(){
    cout << "Nombre del Director: " << devolverNombre() << endl;
    cout << "Facultad: " <<    devolverFacultad() << endl;
    cout << endl;
}

// Metodo director-maestro
void Director :: asignarMateria(Maestro& maestro,string mt){
    maestro.capturarMateria(mt);
}

// Metodo director-alumno
void Director :: asignarMatricula(Alumno& alumno,int mtr){
    alumno.capturarMatricula(mtr);
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

void Maestro::mostrarInfoMaestro() {
    cout << "Nombre del Profesor: " << devolverNombre() << endl;
    cout << "Matricula: " << devolverMatricula() << endl;
    cout << "Materia: " << devolverMateria() << endl;
    cout << "Dia Asignado: " << devolverDiaAsignado() << endl;
    cout << endl;
}

//<<-----Alumno----->>

Alumno :: Alumno(string nom, int ed, string f, string mt1, string mt2, string mt3){ 
    nombre = nom;
    edad = ed;
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


void Alumno :: capturarMatricula(int mtr){
    matricula= mtr;
}

void Alumno::mostrarInfoAlumno() {
    cout << "Nombre del Alumno: " << devolverNombre() << endl;
    cout << "Edad: " << devolverEdad() << endl;
    cout << "Matricula " << devolverMatricula() << endl;
    cout << "Materia 1: " << devolverMateria1() << endl;
    cout << "Materia 2: " << devolverMateria2() << endl;
    cout << "Materia 3: " << devolverMateria3() << endl;
    cout << endl;
}

int main(){

    Maestro m("Juan Perez", 123456, "Lunes");

    Alumno a("Carlos Lopez", 18,"Ciencias de la computacion", "Matematicas", "Fisica", "Programacion");

    Director d("Enrique Hernandez", "Ciencias de la computación");
   
    d.asignarMateria(m,"Matematicas");
    d.asignarMatricula(a,202340256);

    d.mostrarInfoDirector();
    m.mostrarInfoMaestro();
    a.mostrarInfoAlumno();

    return 0;
}