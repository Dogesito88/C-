#include <iostream>

using namespace std;

class ClaseA {
    private:
    int x;
    public:
    ClaseA(int);

    template <class Tipo>
    void func(Tipo, Tipo);
};

ClaseA::ClaseA(int a){
    x = a;
}

template <class Tipo>
void ClaseA::func(Tipo a, Tipo b){
    cout << a << endl;
    cout << b << endl;
    cout << x << endl;
}

int main(){
    ClaseA obj1(4), obj2(5);
    obj1.func('m', 'k');
    obj2.func( 100, 200);
}