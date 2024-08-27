#include <iostream>
#include <cstdlib>
using namespace std;

int sumarDigitos(int n){
    if(n==0)
        return n;
    return sumarDigitos (n/10) +(n%10);
}

/*
bool esPrimo(int n, int x){
    if(n%x==0 || n!=x)
        return false;
    if (x*x > n)
        return true;
    return esPrimo(n,x+1);
}
*/

int invertirNum(int n, int m){
    if(n==0)
        return m;
    return invertirNum(n/10, m*10 + n%10);
}

int sumaN(int n){
    if(n>0)
        return n + sumaN(n-1);
    return 0;
}

int main(){
    int n;
    cin >> n;
    cout<< sumaN(n);
}

