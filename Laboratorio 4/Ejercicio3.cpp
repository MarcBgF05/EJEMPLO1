#include "iostream"
using namespace std; 
int main(){ //by Marcos Granillo 00028320 
    int a; 
    cout<<"verificaremos si un numero es positivo, negativo o cero "<<endl; 
    cout<<"Digite un numero: \n";
    cin>>a; 
    if(a > 0) {
        cout<<"Tu numero es positivo "; 
    }
    else if(a < 0)  {
        cout<< " Tu numero es negativo";
    }
    else {
        cout<<"tu numero es cero "; 
    }
}