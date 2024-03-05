#include <iostream>
using namespace std;
class Queso{

    protected:
    string so ;
    public:
    string getSo(){return so;}
    Queso(string so) : so(so) {}
};
int main()
{
    Queso *q = new Queso ("so");
    string respuestaSo;
    cout<< "Que";
    cin>>respuestaSo;
    if(respuestaSo == q->getSo()){
        cout<< "Que" << q->getSo()<< "rra" << endl;
    }
    else{
        cout<<"no va asi bro\n";
    }
    
    return 0;
}