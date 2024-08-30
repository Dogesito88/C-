#include <iostream>
#include <string.h>

using namespace std;

//---------- DEFINICIÓN --------------
class Director{
    private:
    string nombre;
    string facultad;

    public:
    Director(string,string);
    string mostrar_nombre();
    string mostrar_facultad();
    void mostrar_Infomacion_Director();
    
};
class Maestro{
    private:
    string nombre;
    int matricula;
    string materiaImpartida;
    string diaAsignado;

    public:
    Maestro(string,int,string,string);
    string mostrar_nombre();
    int mostrar_matricula();
    string mostrar_materiaImpartida();
    string mostrar_diaAsignado();
    void mostrar_Informacion_Maestro();
};
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
    Alumno(string,int,int,string,string,string,string);
    string mostrar_nombre();
    int mostrar_edad();
    int mostrar_matricula();
    string mostrar_facultad();
    string mostrar_materia1();
    string mostrar_materia2();
    string mostrar_materia3();
    void mostrar_Informacion_Alumno();

};
//------------ IMPLEMENTACIÓN ---------------

Director::Director(string nom,string facu){
    nombre = nom;
    facultad = facu;
}
string Director::mostrar_nombre(){
    return nombre;
}
string Director::mostrar_facultad(){
    return facultad;
}

Maestro::Maestro(string name,int mat, string mateImpartida,string diaAsig){
    nombre = name;
    matricula = mat;
    materiaImpartida = mateImpartida;
    diaAsignado = diaAsig;
}
string Maestro::mostrar_nombre(){
    return nombre;
}
int Maestro::mostrar_matricula(){
    return matricula;
}
string Maestro::mostrar_materiaImpartida(){
    return materiaImpartida;
}
string Maestro::mostrar_diaAsignado(){
    return diaAsignado;
}
void Director::mostrar_Infomacion_Director(){ 
    cout <<"Director: "<<mostrar_nombre()<< endl;
    cout <<"Facultad: "<<mostrar_facultad()<<endl;
    cout << endl;
}

void Maestro:: mostrar_Informacion_Maestro(){ 
    cout << "El nombre del docentes es:"<<mostrar_nombre()<<endl;
    cout <<"La matricula es: "<<mostrar_matricula()<< endl;
    cout <<"Materia impartida: "<<mostrar_materiaImpartida()<< endl;
    cout <<"Día asignado: "<<mostrar_diaAsignado()<< endl;
    cout << endl;
}

Alumno::Alumno(string nom,int age,int matri,string facu,string mate1,string mate2,string mate3){
    nombre = nom;
    edad = age;
    matricula = matri;
    facultad = facu;
    materia1 = mate1;
    materia2 = mate2;
    materia3 = mate3;
}
string Alumno::mostrar_nombre(){
    return nombre;
}
int Alumno::mostrar_edad(){
    return edad;
}
int Alumno::mostrar_matricula(){
    return matricula;
}
string Alumno::mostrar_facultad(){
    return facultad;
}
string Alumno::mostrar_materia1(){
    return materia1;
}
string Alumno::mostrar_materia2(){
    return materia2;
}
string Alumno::mostrar_materia3(){
    return materia3;
}

void Alumno::mostrar_Informacion_Alumno(){
    cout <<"El nombre del alumno es: "<<mostrar_nombre()<< endl;
    cout <<"La edad es: "<<mostrar_edad()<<endl;
    cout <<"La matricula es: "<<mostrar_facultad()<<endl;
    cout <<"Materia 1 es: "<<mostrar_materia1()<<endl;
    cout <<"Materia 2 es: "<<mostrar_materia2()<<endl;
    cout <<"Materia 3 es: "<<mostrar_materia3()<<endl;
    cout << endl;
}

int main()
{
    Director direc("Omar","Ingeniería");
   
    direc.mostrar_Infomacion_Director();

    Maestro docente("Carlos",12356987,"Cálculo","Lunes");
 
    docente.mostrar_Informacion_Maestro();

    Alumno alm("Eduardo",21,20176734,"Ciencias de la computación","Inglés","Cálculo","Modelado");

    alm.mostrar_Informacion_Alumno();

    return 0;
}