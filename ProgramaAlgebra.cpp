#include <iostream>

int vectorA[3], vectorB[3],resultado[3];
using namespace std;

void guardarValores(int cantidad){
    for (int i = 0; i < cantidad; i++){ 
        cout << "Ingrese los valores en la posicion " << i << " del vector A: ";
        cin >> vectorA[i];
        cout << "Ingrese los valores en la posicion " << i << " del vector B: ";
        cin >> vectorB[i];
        cout << endl;
    }
} 

void sumarVectores(int cantidad){
    for (int i = 0; i < cantidad; i++)
        resultado[i] = vectorA[i] + vectorB[i];
}

void mostrarSumaVectores(int cantidad){
    int i = 0;
     for ( i = 0; i < cantidad; i++){
        cout  << "Vector A [" << i <<"] "<< vectorA[i] << endl;
     }
     cout << endl;
      for (int i = 0; i < cantidad; i++){
        cout  << "Vector B [" << i << "] "<< vectorB[i] << endl;
     }
     cout << endl;
      for (int i = 0; i < cantidad; i++){
        cout  << "Resultado de la posicion " << i << ": "<< resultado[i] << endl;
     }
     cout << endl;
}

void restarVectores(int cantidad){
    for (int i = 0; i < cantidad; i++)
        resultado[i] = vectorA[i] - vectorB[i];       
}

void mostrarRestaVectores(int cantidad){
    int i = 0;
     for ( i = 0; i < cantidad; i++){
        cout  << "Vector A [" << i << "] "<< vectorA[i] << endl;
     }
     cout << endl;
      for (int i = 0; i < cantidad; i++){
        cout  << "Vector B [" << i << "] "<< vectorB[i] << endl;
     }
     cout << endl;
      for (int i = 0; i < cantidad; i++){
        cout  << "Resultado de la posicion " << i << ": "<< resultado[i] << endl;
     }
     cout << endl;
}

int main (){
int cantidad = 3;
guardarValores(cantidad);
cout  << "Suma de vectores \n" << endl;
sumarVectores(cantidad);
mostrarSumaVectores(cantidad);
cout  << "Resta de vectores \n" << endl;
restarVectores(cantidad);
mostrarRestaVectores(cantidad);
cout  << "Multiplicacion de vectores \n" << endl;
return 0; 
}
