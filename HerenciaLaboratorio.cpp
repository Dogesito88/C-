#include <iostream>
#include <string>
using namespace std;
 
class Animal{ //clase BASE
protected:
       string nombre;
       int edad, peso;
public:
	//constructores
	Animal() : nombre("Animal"), edad(0), peso(5) {}
	Animal(string nombre, int edad, int peso) : nombre(nombre), edad(edad), peso(peso) { 
	 }
     ~Animal() {}
     void mostrarNombre(){ cout << "Nombre del animal: " << nombre << endl;}
     int getEdad() { return edad; }
     void setEdad(int e) { edad = e; }
     int getPeso()  { return peso; }
     void setPeso(int p) { peso = p; }
     void hablar() { cout << "Emitiendo sonido ..." << endl;}
    void jugar() { cout << "Jugando ..." << endl; }
}; //clase mamifero
 
class Mascota : public Animal  {  //herencia public
protected:
        string direccionCasa;
        string nomHumano;
public:
	//constructores
	Mascota(): Animal("Mascota",1, 3), direccionCasa("Puebla"), nomHumano("Armando") { }
	Mascota(string nombre, int edad, int peso, string direccionCasa, string nomHumano) : Animal(nombre, edad, peso), 
	direccionCasa(direccionCasa), nomHumano(nomHumano) { }
    ~Mascota() { }
    void mostrarNombre(){ cout << "Nombre de la mascota: " << nombre << endl;}
	string getDireccion()  { return direccionCasa;}
    void setDireccion(string direccionCasa) { this->direccionCasa = direccionCasa;}
	string getNombrehumano()  { return nomHumano;}
    void setNombreHumano(string nomHumano) { this->nomHumano = nomHumano;}
      void hablar() {
        cout << "Emite sonido...\n"; }
        void jugar() {
     	cout << "Jugando ..." << endl;
	}
	//otros metodos
	void mostrarInformacion() { 
	cout << "Nombre del dueño: " << nomHumano<< endl;
	cout << "Direccion: " << direccionCasa << endl;
	}
}; //clase mascota
 
class Perro : public Mascota  {  //herencia public
protected:
        string raza;
public:
	//constructores
	Perro(): Mascota("Hector",1, 3,"Concepcion la cruz","Marcos"), raza("Pug") { }
	Perro(string nombre, int edad, int peso, string direccionCasa, string nomHumano, string raza) : Mascota(nombre, edad, peso, direccionCasa, nomHumano), 
	raza(raza) { }
    ~Perro() { }
    void mostrarNombre(){ cout << "Nombre del perro: " << nombre << endl;}
	string getRaza()  { return raza;}
    void setRaza(string raza) { this->raza = raza;}
 
	//otros metodos
    void mueveCola() {  cout << "Moviendo la cola ...\n"; }
	void pideComida() { cout << "Pidiendo comida ...\n"; }
	void mostrarDatos() { cout << "Es un perro de raza: " << raza << endl;}
	//Sobreescritura (Override) de mÃ©todos
   	void hablar() {  cout << "guau guau guauu...\n";}
   	void jugar() { cout << "jugando con palo ... \n";}
	void mostrarInformacion() { 
	cout << "Nombre del dueño: " << nomHumano<< endl;
	cout << "Direccion: " << direccionCasa << endl;
	}
}; //class Perro
 
class Sabueso : public Perro  {  //herencia public
protected:
        string olfato;
public:
	//constructores
	Sabueso(): Perro("Miguel",2,20,"Concepcion Guadalupe","Antonio","Beagle"), olfato("Muy agudo"){}
	Sabueso(string nombre, int edad, int peso, string direccionCasa, string nomHumano, string raza, string olfato) : Perro( nombre, edad,  peso,  direccionCasa, nomHumano, raza), 
	olfato(olfato) { }
    ~Sabueso() { }
    void mostrarNombre(){ cout << "Nombre del sabueso: " << nombre << endl;}
	string getOlfato()  { return olfato;}
    void setOlfato(string olfato) { this->olfato = olfato;}
 
	//otros metodos
    void mueveCola() {  cout << "Moviendo la cola ...\n"; }
	void pideComida() { cout << "Pidiendo comida ...\n"; }
	void olfatea() { cout << "Olfateando ... \n"}
	//Sobreescritura (Override) de mÃ©todos
   void hablar() { cout << "guau guau guauu...\n";	}
   void jugar() { cout << "jugando con pelota ... \n";}
}; //class sabueso
 
 
class Gato:public Mascota{
  protected:
     string color;
  public:
  	 //tambiÃ©n se puede inicializar todos los atributos aquÃ­, pero es mejor en clase base
    Gato(): Mascota("David",1, 2,"Colonia La cruz","Lucy") { color = "negro"; }
	Gato(string nombre, int edad, int peso, string color) : Mascota(nombre, edad, peso, direccionCasa, nomHumano), 
	color(color) { }
    void mostrarNombre(){ cout << "Nombre del gato: " << nombre << endl;}
    void cazaRatones() { cout << "Cazando ratones :v ... \n";}
   
	//Sobreescritura (Override) de mÃ©todos
    void hablar() { cout << "miau miau ...\n";}
    void jugar() { cout << "jugando con estambre ... \n";}
	
}; //class gato
 
class Cerdo:public Animal{
  protected:
     string hocico;
  public:
  	 //tambiÃ©n se puede inicializar todos los atributos aquÃ­, pero es mejor en clase base
    Cerdo(): Animal("Fernando",2, 50) { hocico = "Corto"; }
	Cerdo(string nombre, int edad, int peso, string hocico) : Animal(nombre, edad, peso), 
	hocico(hocico) { }
    void mostrarNombre(){ cout << "Nombre del cerdo: " << nombre << endl;}
     void revolcarse() { cout << "Revolcandose en lodo... \n";}
	//Sobreescritura (Override) de mÃ©todos
    void hablar() { cout << "Oink Oink ...\n";}

}; //clase cerdo
 
int main()
{
	Perro *p = new Perro();
	Sabueso *s = new Sabueso();
	Gato *g = new Gato();
	Cerdo *c = new Cerdo();

	cout << "\nSale el perro \n";
    p->mostrarNombre();
	p->hablar();
	p->pideComida();

	cout << "\nSale el sabueso \n";
	s->mostrarNombre();
    s->hablar();
    s->mueveCola();

	cout << "\nSale Gato\n";
	g->mostrarNombre();
    g->hablar();
    g->cazaRatones();
	
	cout << "\nSale Cerdo\n";
    c->mostrarNombre();
    c->hablar();
	c->revolcarse();

 
	return 0;
}