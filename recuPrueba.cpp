#include <iostream>
#include <cstdlib>
using namespace std;

int exp(int x, int y){
    if(y==0){ 
        return 1;
    }
    return x * exp(x,y-1);
}    
int main(){
	int x=2, y=2;
    cout << "Exp: "<< exp(x,y) << endl;
}