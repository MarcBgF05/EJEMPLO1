#include "iostream"
#include "string.h"
using namespace std; 

struct libro{
 string titulo; 
 string autor; 



}; 
struct libro catalogo[3]; 
int canti=0; 

void entrada();
void buscartitulo();
void buscarautor(); 

int main(){

bool continuar = true ;
do{
int opcion = 0; 
cout<<"1 entrada de libro \n"; 
cout<<"2 buscar por titulo \n"; 
cout<<"3 buscar por autotr \n"; 
cout<<"4 salir\n"; 
cin>>opcion; 
cin.ignore(); 

 switch (opcion)
 {
 case 1: entrada(); break; 
 case 2: buscartitulo(); break; 
 case 3: buscarautor(); break;  
 case 4: continuar= false; 
 }//sw

}while(continuar);
return 0; 

}
void entrada(){
    if(canti<3){
    cout<<"Digite el titulo: \n";
    getline(cin,catalogo[canti].titulo); 
    cout<<"Dgite el autor:   \n"; 
    getline(cin,catalogo[canti].autor);
    cin.ignore(); 
    canti++; 
    }
    else{
        cout<<"Error  \n"; 
    }
}
void buscartitulo(){
    string untitulo ;
    cout<<"Titulo a buscar: \n"; 
    getline(cin,untitulo); 
    for (int i = 0; i < canti; i++)
    {
        if(untitulo.compare(catalogo[i].titulo)){
           cout<<"libro encontrado \n"; 
           return; 
        }//if
        
    }//fin for
     



}
void buscarautor(){
    string unautor; 
    cout<<"ingrese el nombre del autor a buscar: \n";
    getline(cin,unautor);
     for (int i = 0; i < canti; i++)
    {
        if(unautor.compare(catalogo[i].autor)){
           cout<<"libro encontrado \n"; 
           return; 
        }//if
        
    }//fin for

}