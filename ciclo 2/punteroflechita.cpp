#include "iostream"
using namespace std; 
struct ciclo{
    int correlativo; 
    int anio; 
}; 
int main(){
    struct ciclo actual; 
    actual.correlativo = 3;
    actual.anio= 2019; 
    struct ciclo *punt = &actual; 
    cout<<"Modificando correlativo \n"; 
    (*punt).correlativo = 1; 
    cout<<"MOdificando anio \n";
    (*punt).anio= 2020; 
    cout<<"Accediendo al registro: \n"; 
    cout<<actual.correlativo<<"/"<<actual.anio<<endl;
    cout<<"mediante miembro puntero\n";
    cout<<(*punt).correlativo<<"/"<<punt->anio; 



}