#include "iostream"
using namespace std; 
int main(){ //by Marcos Granillo 00028320 
    int a; 
    cout<<"verificaremos si un numero es par o impar "<<endl; 
    cout<<"Digite un numero: \n";
    cin>>a; 
    if(a%2 == 0) {
        cout<<"Tu numero es par  "; 
    }
    else  {
        cout<< " Tu numero es impar";
    }
}