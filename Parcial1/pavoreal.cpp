#include "iostream"
#include "string.h"
using namespace std; 
struct pavo{
    string nombre;
    int peso; 
    int anios;
    char sex; 
};
struct pavo pr[6]; // se coloca una variable 
int cantpavactual=0;
void entrada(); 
int cant(pavo *pr);
int main(){
    cout<<"Bienvenido al Zoologico\nen esta seccion hablaremos de los pavos reales\n";
    cout<<"El zoo cuenta con 6 pavos\npodras verificar cuantos de ellos pueden repodroducirse\n"; 
   bool continuar= true; 
   do{
     int opcion=0; 
     cout<<"\n1. para registrar datos de los pavos\n";
     cout<<"2. para mostrar los pavos que se pueden reproducir \n";
     cout<<"3. para salir \n";
     cin>>opcion;
     switch (opcion)
     {
     case 1: entrada();break; 
     case 2: cant(pavo *pr); break; 
     case 3: continuar=false; break; 
     }
   }while(continuar); 


} 
void entrada(){
     
for (int i = 0; i < 6 ; i++)
{      
     cout<<"llenandoi datos del pavo ["<<i<<"]"<<endl;
      cout<<"Digite su nombre: ";
    getline(cin,pr[i].nombre); 
    cin.ignore();

     cout<<"digite su peso: "; 
     cin>>pr[i].peso;
     while (pr[i].peso<0)
     {
          cout<<"digite su peso correcto porfavor: "; 
     cin>>pr[i].peso;
     }// while para verificar que su peso no sea negativo 
     
     cout<<"digite los anios que tiene: "; 
     cin>>pr[i].anios;
       while (pr[i].anios<0)
     {
     cout<<"digite su edad correcto porfavor: "; 
     cin>>pr[i].anios;
     }// while para verificar que su años no sea negativo 

     cout<<"digite su sex, M-macho, H-hembra:"; 
     cin>>pr[i].sex;
}
}// entrada 

int cant(pavo *pr){
     int sum; 
 for (int  i = 0; i < 6; i++)
 {  
      if(pr[i].anios>1 && pr[i].sex == 'H' ){
           sum++; 
      }
 }
 return sum; 
}