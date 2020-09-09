#include "iostream"
using namespace std; 

struct ciclo{
    int  anio; 
    int correlativo; 
}; 
void normal (struct ciclo *p);
void nonormal(struct ciclo *p); 
int main(){
    struct ciclo hola; 
    hola.anio = 2019; 
    hola.correlativo =3;
    normal(&hola);
    nonormal(&hola); 

}
void normal(struct ciclo *p){
    cout<<"forma (*p).x \n"; 
    cout<<(*p).correlativo<<"/"<<(*p).anio<<endl; 

}
void nonormal(struct ciclo *p){
    cout<<endl; 
    cout<<"forma de la flechita \n"; 
    cout<<p->correlativo<<"/"<<p->anio;
}

