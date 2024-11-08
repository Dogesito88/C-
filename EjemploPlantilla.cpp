#include <iostream>

using namespace std;

template <class T1, class T2>
class EjemploPlantilla{
    private:
    T1 dato1;
    T2 dato2;
    public:
    EjemploPlantilla();
    EjemploPlantilla(T1,T2);
    void modificarDato1(T1);
    void modificarDato2(T2);
    T1 obtieneDato1();
    T2 obtieneDato2();
    void imprimeDatos();
};

template<class T1, class T2>
EjemploPlantilla< T1, T2>::EjemploPlantilla(){}

template<class T1, class T2>
EjemploPlantilla< T1, T2>::EjemploPlantilla( T1 D1, T2 D2){
    dato1 = D1;
    dato2 = D2;
}

template<class T1, class T2>
void EjemploPlantilla< T1, T2>::modificarDato1(T1 NuevoDato){
    dato1 = NuevoDato;
}

template<class T1, class T2>
void EjemploPlantilla< T1, T2>::modificarDato2(T2 NuevoDato){
    dato2 = NuevoDato;
}

template<class T1, class T2>
T1 EjemploPlantilla< T1, T2>:: obtieneDato1(){
    return dato1;
}

template<class T1, class T2>
T2 EjemploPlantilla< T1, T2>:: obtieneDato2(){
    return dato2;
}

template<class T1, class T2>
void EjemploPlantilla< T1, T2>::imprimeDatos(){
    cout << "Dato 1: " << dato1  << endl;
    cout << "Dato 2: " << dato2  << endl;
}

int main(){

    EjemploPlantilla <int, float> ObjetoPlantilla(1,6.0);

    ObjetoPlantilla.imprimeDatos();
    ObjetoPlantilla.modificarDato1(2);
    ObjetoPlantilla.modificarDato2(12.0);
 
    cout << "Dato 1 modificado: "<< ObjetoPlantilla.obtieneDato1() << endl;
    cout << "Dato 2 modificado: "<< ObjetoPlantilla.obtieneDato2() << endl;

    return 0;
}