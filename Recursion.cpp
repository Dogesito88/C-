#include <iostream>
#include <cstdlib>
using namespace std;

int factorial(int n){ 
    if (n==1){
        return n;
    }
    return n * factorial(n-1);
} 

int exp(int x, int y){
    if(y==0){ 
        return 1;
    }
    return x * exp(x,y-1);
}

int sumaNaturales(int n){ //  n+(n-1)+(n-2)+...+2+1
    if (n==1){
        return n;
    }
    return n + sumaNaturales(n-1);
} 

void imprime(int n){
    if(n==0){
        cout << " " << n;
        return;
    }
    cout << " " << n;
    imprime(n-1);
}

void imprimeAlreves(int n){
    if(n==0){
        cout << " " << n;
        return;
    }
    imprimeAlreves(n-1);
    cout << " " << n;
     
}

int sumas(int x, int y){ //Por ejemplo 5+3 = 5+1+1+1 = 8
    if(y == 0 ){
    return x;}
    else{
    return sumas(x+1,y-1);}
}

int dividir(int x, int y){//Usando restas Por ejemplo 10/3 = 10-3-3-3 = 3  
  if(y>x){
    return 0;
  }
  return dividir(x-y,y)+1;
}

int multiplicar(int x, int y){  //usando sumas, por ejemplo 5*3 = 5+5+5 = 15
    if(y==0){ 
    return 0;
    }
    return x + multiplicar(x,y-1);
}

int restas(int x, int y){  //Por ejemplo 5-3 = 5-1-1-1 = 2
	if(y == 0 ){
	return x;}
	else{
	return restas(x-1,y-1);} 
}

int main(){
	int n, x, y, op;

	do {
		cout << "1. Factorial\n";
		cout << "2. Exponencial\n";
		cout << "3. Suma de primeros naturales\n";
		cout << "4. imprime n\n";
		cout << "5. Imprime al reves n\n";
		cout << "6. Suma de dos numeros\n";
		cout << "7. Division\n";
		cout << "8. Multiplicacion\n";
		cout << "9. Resta\n";
		cout << "0. Salir\n";
		cout << "Selecciona una opcion: ";
		cin >> op;
		switch(op){
			case 1: 
				cout << "Factorial de un numero.\n";
				cout << "Ingresa numero: ";
				cin >> n;
				cout << "Factorial: " << factorial(n) << endl;
				break;
			case 2: 
				cout << "Potencia de una base a un exponente.\n";
				cout << "Ingresa base: ";
				cin >> x; 
				cout << "Ingresa exponente: ";
				cin >> y;
				cout << "Pontencia: " << exp(x,y) << endl;				
				break;
			case 3: 
				cout << "Suma de los primeros n naturales\n";
				cout << "Ingresa n: ";
				cin >> n;
				cout << "Suma: " << sumaNaturales(n) << endl;
				break;
			case 4:
				cout << "Imprime n en forma descendente\n";
				cout << "Ingresa n: ";
				cin >> n;
				imprime(n);  //5 4 3 2 1 0
				cout << endl;
				break;
			case 5:
				cout << "Imprime al reves n en forma ascendente\n";
				cout << "Ingresa n: ";
				cin >> n;
				imprimeAlreves(n);  //0 1 2 3 4 5
				cout << endl;
				break;
			case 6:
				cout << "Suma de dos numeros.\n";
				cout << "Ingresa el primer numero: ";
				cin >> x;
				cout << "Ingresa el segundo numero: ";
				cin >> y;
				cout << "Suma: " << sumas(x,y) << endl;	  
				cout << endl;
				break;
			case 7:
				cout << "Division\n";
				cout << "Ingresa el numerador: ";
				cin >> x;
				cout << "Ingresa el divisor: ";
				cin >> y;
				cout << "Division: " << dividir(x,y) << endl; 
				cout << endl;
				break;
			case 8:
				cout << "Multiplicacion\n";
				cout << "Ingresa el primer numero: ";
				cin >> x;
				cout << "Ingresa el segundo numero: ";
				cin >> y;
				cout << "Multiplicacion: " << multiplicar(x,y) << endl;
				cout << endl;
				break;
			case 9:
				cout << "Resta de dos numeros\n";
				cout << "Ingresa el primer numero: ";
				cin >> x;
				cout << "Ingresa el segundo numero: ";
				cin >> y;
				cout << "Resta: " << restas(x,y) << endl;
				cout << endl;
				break;
		}
	} while (op != 0);

	return 0;
}