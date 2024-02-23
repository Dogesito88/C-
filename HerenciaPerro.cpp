#include <iostream>
using namespace std;

class Perro{ //clase base
protected:
	string nombre, raza, sexo;
	int edad;
public: 
	Perro();
	Perro(string nombre, string raza, int edad, string sexo);
	void ladrar();
	void moverCola();
	void mostrarInfo();
//	void comer();
};

Perro::Perro() : nombre("dog"), raza("doberman"), edad(2),
 sexo("macho") { cout << "\tConstructor Perro " << endl;} 
Perro::Perro(string nombre, string raza, int edad, string sexo) : nombre(nombre), 
raza(raza), edad(edad), sexo(sexo){ 
   cout << "\tConstructor Perro parametrizado" << endl;
}

void Perro::ladrar(){ cout << "Guau guau guauu" << endl; }
void Perro::moverCola() { cout << "moviendo la cola\n"; }
void Perro::mostrarInfo(){
	cout << "Nombre: " << nombre << endl;
	cout << "Raza: " << raza << endl;
	cout << "Edad: " << edad << endl;
	cout << "Sexo: " << sexo << endl;
}

class PerroCazador : public Perro { // : public  indica herencia o tipo de derivacion
protected:
	string tipoCaza;
public:
	PerroCazador();
	PerroCazador(string nombre, string raza, int edad, string sexo, string tipoCaza);
	void cazar();
	void mostrarInfo(); //su propio mostrar info - se redefine o sobreescribe
};

PerroCazador::PerroCazador() : Perro("Firulais", "mezcla", 2, "macho"){
	cout << "\tConstructor Cazador" << endl;
	tipoCaza = "Animales grandes";
}

PerroCazador::PerroCazador(string nombre, string raza, int edad, string sexo, string tipoCaza)
: Perro(nombre, raza, edad, sexo), tipoCaza(tipoCaza){
cout << "\tConstructor Cazador parametrizado" << endl;
}
void PerroCazador::cazar(){
	cout << "Cazando " << tipoCaza << endl;
}

void PerroCazador::mostrarInfo(){
	cout << "PERRO CAZADOR\n";
	cout << "Nombre: " << nombre << endl;
	cout << "Raza: " << raza << endl;
	cout << "Edad: " << edad << endl;
	cout << "Sexo: " << sexo << endl;
	cout << "Tipo caza: " << tipoCaza << endl;
}

class Beagle : public PerroCazador{ //por default la derivacion es privada
protected:
	string temperamento, color, tipoComida;
public:
	Beagle();
	Beagle(string nombre, int edad, string sexo, string tipoCaza, string color);
	void jugar();
	void mostrarInfo();
};

Beagle::Beagle()
: PerroCazador("Ross", "Beagle", 1, "hembra", "animales pequeños"),
 color("Cafe con blanco"), temperamento("Apacible"), tipoComida("corquetas")
{ cout << "\tConstructor Beagle\n";}

Beagle::Beagle(string nombre, int edad, string sexo, string tipoCaza, string color)
: PerroCazador(nombre, "Beagle", edad, sexo, "animales pequeños"), color(color)
{ cout << "\tConstructor Beagle parametrizado\n";}

void Beagle::jugar(){
	cout << "Dando brincos :v :p y persiguiendo " << tipoCaza << endl;;
}

void Beagle::mostrarInfo(){
	cout << "Informacion BEAGLE\n";
	cout << "Nombre: " << nombre << endl;
	cout << "Raza: " << raza << endl;
	cout << "Edad: " << edad << endl;
	cout << "Sexo: " << sexo << endl;
	cout << "Tipo caza: " << tipoCaza << endl;
	cout << "Temperamento: " << temperamento << endl;
	cout << "Color: " << color << endl;
}

int main(){
 	PerroCazador *cazador = new PerroCazador();
 	cazador->mostrarInfo();
 	
 	cout << "\nCreando Beagle \n";
 	Beagle *b = new Beagle();
 	b->mostrarInfo();
	b->cazar();
	return 0;
}
