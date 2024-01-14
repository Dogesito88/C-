//Laboratorio 1: Piramide con errores
#include <iostream>
using namespace std;

class Piramide {
private:
	int n;
public:
	Piramide() {n=1;} //El constructor no tiene que llevar un tipo de retorno
	Piramide(int _n){ n=_n;	} //Se debe llamar igual que la clase
	void setN(int _n){ n=_n;}
	int getN(){ return n; }
	void imprimir(); //Se eliminan las llaves y se añade ;
	void imprimirAlReves(); //Se añade ;
}; //Se añade ;

void Piramide::imprimir(){
	for(int x=1; x<=n; x++){ // Se modifica x<n a x<=n  
		for(int i=1; i<=x;i++ ) {
			cout << x; // Se modifica i a x para que imprima el numero que va de acuerdo a la fila
		}
		cout << endl;
	}
}

void Piramide::imprimirAlReves(){
	for(int x=n; x>=1; x--){ // Se modifica x=0 a x>=1  
		for(int i=1; i<=x;i++ ) {
			cout << x; // Se modifica i a x para que imprima el numero que va de acuerdo a la fila
		}
		cout << endl;
	}
}

int main() {
	int n;
	
	cout << "Programa que construye una piramide dado el numero de entrada\n";
	cout << "Ingresa un numero: ";
	cin >> n;
	
	Piramide p1(n);
	cout << "Imprime piramide de " << n <<endl;
	p1.imprimir();
	cout << "Ingresa un numero para imprimir la piramide alreves: ";
	cin >> n;
	p1.setN(n);
	cout << "Imprime piramide al reves de " <<  p1.getN() <<endl; // se usa getN()
	p1.imprimirAlReves(); 
	
	return 0;
}
