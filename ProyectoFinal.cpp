#include "iostream"
using namespace std; 
    const int longcad=20; 
    struct cpa{    //cpa= costo por articulo 

        char nombreArticulo[longcad+1];
        int cantidad; 
        float precio;
        float costoporart; 
     
      }cpa1; //estrucutra 
 void leer(int n, cpa a[]); 
float calcular(int n, cpa a[]); 
void desplegar(cpa a[] , int n); 
float  retorno(int n,cpa a[]); 

int main(){
    int n=0, i;
    n++; 
    cout<<"ingrese el n"<<char(163)<<"mero de art"<<char(161)<<"culos :"<<endl; // los char es colocado para colocar letras con tilde 
    cin>> n; 
    cpa a[n];  
    leer(n,a); 
    calcular(n,a); 
    desplegar(a,n); 
    cout<<"\n\n El total a pagar es: \n$"<<retorno(n,a);
   
}// main 
void leer(int n, cpa a[]){
 
 for (int i = 0; i < n; i++)
 { 
     cin.ignore(256,'\n');
     cout<<"ingrese los datos del art"<<char(161)<<"culo"<<": "<<i<<endl; 
     cout<<"ingrese el nombre del articulo : ";  
     cin.getline(a[i].nombreArticulo,21,'\n'); 
    cout<<"cantidad de articulos \n"; 
    cin>>a[i].cantidad;
    cout<<"precio del producto \n"; 
    cin>>a[i].precio;
 }//for 
  
}//leer 
float calcular(int n, cpa a[] ){
   
    for (int  i = 0; i < n; i++)
    {
       a[i].costoporart=a[i].cantidad*a[i].precio;
 
    }//for 
    return a[1].costoporart; 
    
}// calcular 
void desplegar(cpa a[] , int n){
 for (int  i = 0; i < n ; i++)
 {
    cout<<"EL Art"<<char(161)<<"culo"<<": "<<i<<endl; 
    cout<<"--------------------------------------"<<endl; 
    cout<<a[i].nombreArticulo<<endl; 
    cout<<"Precio del producto: $"<<a[i].precio<<endl; 
    cout<<"cantidad del prdocuto :"<<a[i].cantidad<<endl; 
    cout<<"costo a pagar por el articulo: $"<<a[i].costoporart; 
 }
 
}// desplegar 
float  retorno( int n,cpa a[]){
 float acum ; 
 
 for (int i = 0; i < n; i++)
 {
     acum+=a[i].costoporart; 
 }
 return acum; 
}// retornar 