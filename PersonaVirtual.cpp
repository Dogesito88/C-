#include <iostream>

using namespace std;

//Definición


class Persona{
	
	protected:
		
	string nombre;
	int edad;
	
	public:
	
	Persona();
	
	string devolverNombre();
	int devolverEdad();
	virtual void capturarInfo(string, int);
	
};

// <<-----Maestro----->>

class Maestro : public Persona{

    private:

    int id;
    string clase;
    string diaAsignado;

    public:
    
    Maestro();

    int devolverId();
    string devolverClase();
    string devolverDiaAsignado();
   
	void capturarInfo(string n, int e, int i, string c, string da);
};


//<<-----Alumno----->>

class Alumno : public Persona{

    private:
 
    int matricula;
    string materia;

    public:
    
    Alumno();

    int devolverMatricula();
    string devolverFacultad();
    string devolverMateria();
   
	void capturarInfo(string n, int e, int m, string mt);
   
};

//<<-----Director----->>

class Director : public Persona{

    private:

    string facultad;

    public:
    
    Director()

    string devolverFacultad();
    
	void capturarInfo(string n, int e, string f);
};


Persona::Persona(){
	nombre = "";
	edad = 0;
} 

void Persona :: capturarInfo(string n, int e){
    nombre = n;
    edad = e;
}

string Persona :: devolverNombre(){
    return nombre;
}

int Persona :: devolverEdad(){
    return edad;
}

//<<-----Alumno----->>
Alumno :: Alumno() : Persona(){
	matricula = 0;
	materia = "";
}

void Alumno :: capturarInfo(string n, int e, int m, string mt){
    nombre = n;
    edad = e;
    matricula = m;
    materia = mt;
}

int Alumno :: devolverMatricula(){
    return matricula;
}

string Alumno :: devolverMateria(){
    return materia;
}
    
// <<-----Maestro----->>

Maestro :: Maestro() : Persona(){
	id = 0;
	clase = "";
	diaAsignado = "";
}
void Maestro :: capturarInfo(string n, int e, int i, string c, string da){
    nombre = n;
    edad = e;
    id = i;
    clase = c;
    diaAsignado = da;
}

int Maestro :: devolverId(){
    return id;
}

string Maestro :: devolverClase(){
    return clase;
}

string Maestro :: devolverDiaAsignado(){
    return diaAsignado;
}

//<<-----Director----->>

Director :: Director () : Persona(){
	facultad = "";
}

void Director :: capturarInfo(string n, int e, string f){
    nombre = n;
    edad = e;
    facultad = f;
}

string Director :: devolverFacultad(){
    return facultad;
}


int main(){

	Maestro m;
	Alumno a;
	Director d;
	
	m.capturarInfo("Luis", 35, 12345, "Matematicas", "Lunes");
	a.capturarInfo("Ana", 20, 54321, "POO");
	d.capturarInfo("Juan", 40, "Artes");
	
	cout << "Maestro:" << endl;
	cout << "Nombre: " << m.devolverNombre() << endl;
	cout << "Edad: " << m.devolverEdad() << endl;
	cout << "ID: " << m.devolverId() << endl;
	cout << "Clase: " << m.devolverClase() << endl;
	cout << "Dia asignado: " << m.devolverDiaAsignado() << endl;
	
	cout << "\nAlumno:" << endl;
	cout << "Nombre: " << a.devolverNombre() << endl;
	cout << "Edad: " << a.devolverEdad() << endl;
	cout << "Matricula: " << a.devolverMatricula() << endl;
	cout << "Materia: " << a.devolverMateria() << endl;

	cout << "\nDirector:" << endl;
	cout << "Nombre: " << d.devolverNombre() << endl;
	cout << "Edad: " << d.devolverEdad() << endl;
	cout << "Facultad: " << d.devolverFacultad() << endl;

	return 0;
}
