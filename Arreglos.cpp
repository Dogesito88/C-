#include <iostream>

using namespace std;

int main (){
    int x = 17, y;
    int *p;
    p = &x;
    
    cout << "El valor de x es :" << *p << endl; //imprime 17
    y = *p+3; // A 'y' se le asigna 20
    cout << "El valor de y es :" << y << endl;



    int a[10], z;
    int *ap;

    ap = &a[0]; // ap apunta a la direccion de a[0]

    z = *ap; // A 'z' se le asigna el contenido de ap(a[0])

    *(ap + 1) = 100; //Se asigna al segundo elemento de 'a' el valor 100 usando ap

    cout << "\nContenido de ap(a[0]): " << z << endl;
    cout << "Contenido del segundo elemento de a: " << a[1]<< endl;
    return 0;

}