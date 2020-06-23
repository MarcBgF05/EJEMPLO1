#include "iostream"
using namespace std;   //by Marcos Granillo 00028320 
int leer(int v1[], int v2[], int n); 
int suma(int v1[], int v2[], int v3[], int n );

int main( ){
	int n = 0; 
	int v1[n], v2[n],v3[n]; 
    leer(v1,v2,n); 
	suma( v1,v2,v3,n ); 
	
} // main 
int leer(int v1[], int v2[], int n)
  {
	 cout<<"ingrese la cantidad de elementos para el vector 1 :"; 
	cin>>n;  
	for(int i=0 ; i<n ; i++ ){
		cout<<"ingrese los numeros de cada elemento "<< i << " : "; 
		cin>>v1[i]; 	 
		}//for  
	cout<<"ingrese la cantidad de elementos para el vector 2: "; 
	cin>>n; 
	for(int i=0 ; i<n; i++ ){
		cout<<"ingrese los numeros de cada elemento "<< i << " :"; 
		cin>>v2[i]; 	 
		}//for 
		
	}// leer 
int suma(int v1[], int v2[], int v3[], int n){
      v1,v2; 
       n; 
   cout<< "la suma de los vectores es: "<<endl; 
   for(int i=0; i<n; i++ ){
		v3[i]=v1[i]+v2[i];
		cout<<i<<" - "<<v3[i]<<endl ; 
	}

}