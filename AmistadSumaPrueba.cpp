#include <iostream> 
using namespace std; 

class Ejemplo
{
    private:
    int Atrib1, Atrib2;
    public:
    Ejemplo(){}
    Ejemplo(int, int) : Atrib1(1),Atrib2(2){}
    void Imprime();
    friend int Suma(int, Ejemplo);
};
int Dato = 5;
int Suma(int Dato, Ejemplo Valor){
    return (Dato+Valor.Atrib1+Valor.Atrib2);
}