#include <iostream>
using namespace std;

class Personaje{
protected:
    string nombre, descripcion, rol;
    int edad, nivel;
public:
    Personaje();
    Personaje(string nombre, int edad, string descripcion, int nivel, string rol);
    void saludo();
    void mostrarInfo();
};

Personaje:: Personaje() : nombre("Mei"), edad(25), descripcion("Dueña del casino"), nivel(50), rol ("Jefe") { cout << "\t Constructor Personaje"<< endl;}
Personaje:: Personaje(string nombre, int edad, string descripcion, int nivel, string rol) : nombre(nombre), edad(edad), descripcion(descripcion), nivel(nivel), rol(rol)
{cout << "\t Constructor Personaje Parametrizado"  << endl; }


void Personaje:: saludo(){ cout << "Hola me llamo " << nombre << " gusto en conocerte" << endl; }

void Personaje:: mostrarInfo(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad:  " << edad << endl;
    cout << "Rol:  " << rol << endl;
    cout << "Nivel: " << nivel << endl;
    cout << "Descripcion:  " << descripcion << endl;
}

class PersonajeP : public  Personaje{
    protected:
   	string companeros;
    public:
    PersonajeP();
    PersonajeP(string nombre, int edad, string descripcion, int nivel, string rol, string companeros);
    void companerosInfo();
    void mostrarInfo();
    
};

PersonajeP :: PersonajeP() : Personaje("Lia",19,"???",45,"Protagonista"){
	cout << "\tConstructor Personaje Protagonista" << endl;
	companeros = "Bel y Era";
}

void PersonajeP:: companerosInfo(){
    cout << "Mis compañeros actuales de equipo son: " << companeros << endl;
}
void PersonajeP:: mostrarInfo(){
    cout << "Constructor Personaje Protagonista \n"  << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad:  " << edad << endl;
    cout << "Rol:  " << rol << endl;
    cout << "Nivel: " << nivel << endl;
    cout << "Descripcion:  " << descripcion << endl;
    cout << "Companeros:  " << companeros << endl;
}
int main(){
 	Personaje *pj = new Personaje ();
 	pj->mostrarInfo();
 	
 	cout << "\nCreando Prota \n";
 	PersonajeP *pp = new PersonajeP();
 	pp->mostrarInfo();
	pp->companerosInfo();
	return 0;
}