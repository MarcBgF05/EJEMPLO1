#include "iostream"
using namespace std; 
int multiplicacion(int a, int b); 
int main(){
    int a,b,multi; 
    cout<<"ingresa los valores de a: ";
    cin>>a; 
    while(a<0){
        cout<<"ingresa los valores de a positivos porfavor: ";
    cin>>a; 
    }
     cout<<"ingresa los valores de b: ";
    cin>>b; 
    while(b<0){
        cout<<"ingresa los valores de b positivos porfavor: ";
    cin>>b; 
    }
    multi=multiplicacion(a,b); 
    cout<<"El resultado de la multiplicacion es: "<<multi<<endl; 
}// mian 

int multiplicacion(int a,int b){

if (b==0) {
    return 0;
    }
else {
    return (a+multiplicacion(a,b-1));
}
}