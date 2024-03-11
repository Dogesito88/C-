#include <iostream>
using namespace std;

class Alumno{

    protected:

    int matricula;
    string nombre;
    float promedio, porcentaje;

    public:

    ~Alumno(){}
    Alumno(int matricula, string nombre, float promedio, float porcentaje) : matricula(matricula), nombre(nombre), promedio(promedio), porcentaje(porcentaje){}
    Alumno(): matricula(202340256), nombre("Saul"), promedio(8.5), porcentaje(85){}

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
    Empleado(): id(12), sueldo(7500), nombreC("Hector Nuñez") {}
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
    Contador() : Empleado(13, 7500, "Armando Mendez") , antiguedad(1){}
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
    ProfesorTiempoCompleto() : Empleado(14, 7500, "Alejandro Acalli") , bonoApoyo(500){}
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
    ProfesorHoraClase() : Empleado(12, 70, "David Cardona") , horas(108){}
    int getID(){return id;}
    int calcularSueldo(){return ( sueldo*horas);}

      void mostrar(){
        cout << "\nID: " << id << endl;
        cout << "Nombre: " << nombreC << endl;
        cout << "Sueldo: " << calcularSueldo() << endl;
        
    }
};//Clase Profesor hora clase

int main(){
   
    int numE = 5; 
    int numA = 3;

    Empleado *empleados[numE];
    empleados[0] = new Contador(11, 7500, "Francisco Hernandez",5);
    empleados[1] = new ProfesorHoraClase(12, 70, "David Cardona",78);
    empleados[2] = new ProfesorTiempoCompleto(13, 7500, "Alejandro Acalli",500);
    empleados[3] = new Contador(14, 7500, "Armando Mendez",1);
    empleados[4] = new ProfesorHoraClase(15, 70, "Juan Pablo",80);
    

    int totalSalarios = 0;
    for (int i = 0; i < numE; ++i) {
             if (empleados[i] != NULL) {
            totalSalarios += empleados[i]->calcularSueldo();
        }
    }

    // Mostrar el resultado
    cout << "La suma total de salarios de los empleados es: " << totalSalarios << endl;

    cout<< "\nPara buscar un empleado introduzca su ID: ";
    int idb;
    cin >> idb;
     
    for (int i = 0; i < numE; ++i) {
        if (empleados[i] != NULL && idb == empleados[i]->getID()) {
            cout << "\n Empleado encontrado:" << endl;
            empleados[i]->mostrar();
        }
        else{
            cout << "\nEmpleado no encontrado" << endl;
        }
    }

    cout<< "Listado de alumnos\n";
    
    Alumno *alumnos[numA];
    alumnos[0] = new Alumno(201, "Luis", 9.2, 80);
    alumnos[1] = new Alumno(202, "Ana", 8.7, 90);
    alumnos[2] = new Alumno(203, "Carlos", 7.8, 70);


    // Mostrar información de los alumnos
    for (int i = 0; i < numA; ++i) {
        alumnos[i]->mostrarInformacion();
    }
}


