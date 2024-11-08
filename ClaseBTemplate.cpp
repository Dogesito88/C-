#include <iostream>

using namespace std;

template <class T1, class T2>
class ClaseB {
    private:
    T1 x;
    T2 y;
    public:
    ClaseB(T1, T2);
    void visualizar();
};

template<class T1, class T2>
ClaseB< T1, T2>::ClaseB(T1 a, T2 b){
    x = a;
    y = b;
}

template<class T1, class T2>
void ClaseB< T1, T2>::visualizar(){
    cout << "Valor de x: " << x  << endl;
    cout << "Valor de y: " << y  << endl;
}

int main(){
    ClaseB <int, char> obj1( 5, 'p');
    ClaseB <bool,float> obj2( true, 9.0);

    obj1.visualizar();
    obj2.visualizar();

    return 0;
}