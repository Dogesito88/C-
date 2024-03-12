#include <iostream>
using namespace std;

class Alumno{

    protected:

    int matricula,porcentaje;
    string nombre;
    float promedio;

    public:

    ~Alumno(){}
    Alumno(int matricula, int porcentaje, string nombre, float promedio) : matricula(matricula), porcentaje(porcentaje),nombre(nombre), promedio(promedio){}
    

    void calcularCuota(){
        if (promedio >= 9.0){
            cout<< "100 pesos\n";
        }
        else if(promedio >= 8.5 && promedio <= 8.9){
            cout<< "200 pesos\n";
        }
        else{
            cout<< "500 pesos\n";
        }
    }

    void mostrarInformacion(){
        cout << "\nMatricula: " << matricula << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Promedio: " << promedio  << endl;
        cout << "Porcentaje: " << porcentaje << endl;
        cout << "Cuota: ";
        calcularCuota();

    }
};//Clase Alumno

class Empleado{

    protected:

    int id, sueldo;
    string nombreC;

    public:

    ~Empleado(){}
    Empleado(int id, int sueldo, string nombreC) : id(id), sueldo(sueldo), nombreC(nombreC){}
  
    int getID(){return id;}
    virtual int calcularSueldo() = 0; //Funcion virtual pura
    virtual void mostrar() = 0; //Funcion virtual pura
};//Clase empleado

class Contador : public Empleado{//Herencia

    protected:

    int antiguedad;

    public:

    ~Contador(){}
    Contador(int id, int sueldo, string nombreC, int antiguedad) : Empleado( id, sueldo, nombreC), antiguedad(antiguedad) {}
   
    int getID(){return id;}
    int calcularSueldo(){ return sueldo + (sueldo * 0.01)*antiguedad;}

      void mostrar(){
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombreC << endl;
        cout << "Antiguedad: " << antiguedad << endl;
        cout << "Sueldo mensual: " << sueldo << endl;
        cout << "Bono: " << (sueldo * 0.01)*antiguedad << endl;
        cout << "Sueldo total: " << calcularSueldo() << endl;
    }
};//Clase Contador

class ProfesorTiempoCompleto : public Empleado{//Herencia

    protected:

    int bonoApoyo;

    public:
    ~ProfesorTiempoCompleto(){}
    ProfesorTiempoCompleto(int id, int sueldo, string nombreC, int bonoApoyo) : Empleado( id, sueldo, nombreC), bonoApoyo(bonoApoyo) {}
   
    int getID(){return id;}
    int calcularSueldo(){return sueldo + bonoApoyo;}
    
    void mostrar(){
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombreC << endl;
        cout << "Sueldo: " << calcularSueldo() << endl;
    }
};//Clase Profesor tiempo completo

class ProfesorHoraClase : public Empleado{//Herencia

    protected:

    int horas;
    public:

    ~ProfesorHoraClase(){}
    ProfesorHoraClase(int id, int sueldo, string nombreC, int horas) : Empleado( id, sueldo, nombreC), horas(horas) {}
   
    int getID(){return id;}
    int calcularSueldo(){return ( sueldo*horas);}

      void mostrar(){
        cout << "\nID: " << id << endl;
        cout << "Nombre: " << nombreC << endl;
        cout << "Sueldo: " << calcularSueldo() << endl;
        
    }
};//Clase Profesor hora clase

class Escuela{

    private:

    Empleado *empleados[5];
    Alumno *alumnos[3];

    public:

    void agregarEmpleado(Empleado *, int pos );
    void agregarAlumno(Alumno *, int pos );
    void mostrarAlumnos();
    void salarioTotal();
    void buscarEmpleado(int idb);
};
void Escuela::agregarEmpleado(Empleado *x, int p) {  
	     empleados[p] = x;
}
void Escuela::agregarAlumno(Alumno *x, int p) {  
	     alumnos[p] = x;
}
void Escuela::mostrarAlumnos(){
    for (int i = 0; i < 3; ++i) { alumnos[i]->mostrarInformacion();}
}
void Escuela::salarioTotal(){
    int totalSalarios = 0;
    for (int i = 0; i < 5; ++i) { if (empleados[i] != NULL) { totalSalarios += empleados[i]->calcularSueldo();}}
    cout << totalSalarios <<endl;
}
void Escuela::buscarEmpleado(int idb){
    for (int i = 0; i < 5; ++i) { 
        if (empleados[i] != NULL && idb == empleados[i]->getID()) {
         cout << "\nEmpleado encontrado:" << endl;
         empleados[i]->mostrar();
        }
        else{cout << "\nEmpleado no encontrado" << endl;}
    }
 }

int main(){
   Escuela *escuela = new Escuela();
    escuela->agregarEmpleado(new Contador(11, 7500, "Francisco Hernandez", 5),0);
    escuela->agregarEmpleado(new ProfesorHoraClase(12, 70, "David Cardona", 78),1);
    escuela->agregarEmpleado(new ProfesorTiempoCompleto(13, 7500, "Alejandro Acalli", 500),2);
    escuela->agregarEmpleado(new Contador(14, 7500, "Armando Mendez", 1),3);
    escuela->agregarEmpleado(new ProfesorHoraClase(15, 70, "Juan Pablo", 80),4);
    
    escuela->agregarAlumno(new Alumno(201, 92,"Luis", 9.2),0);
    escuela->agregarAlumno(new Alumno(202, 87, "Ana", 8.7),1);
    escuela->agregarAlumno(new Alumno(203,78, "Carlos", 7.8),2);

    cout<< "\nSalario total de todos los empleados:";
    escuela->salarioTotal();

    cout<< "\nPara buscar un empleado introduzca su ID: ";
    int idb;
    cin >> idb;
    escuela->buscarEmpleado(idb);

    cout<< "\nListado de alumnos\n";
    // Mostrar información de los alumnos
    escuela->mostrarAlumnos();
    return 0;
}