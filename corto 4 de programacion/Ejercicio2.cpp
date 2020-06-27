#include "iostream"
using namespace std;
float calcular( float estatura[]); 
int comparar(float estatura[], float prom); 
int main(){
	int i=0, arriba,abajo, n=25;
	float estatura[25], prom; 
	 cout<<"calcular el promedio de la estatura de 25 estudiantes \n"; 
        for(i=0; i<25; i++  ){
		cout<<"ingrese la estatura del estudiante "<< i <<" : ";
		cin>>estatura[i]; 
		}// focalcular  
cout<<endl; 
cout<<"el promedio de los valores del arreglo es: "<<calcular(estatura)<<endl;

arriba=comparar(estatura,prom);
cout<<"estudiantes arriba del promedio: "<<arriba<<endl; 
abajo= n-arriba;                       
cout<<"estudiantes abajo del promedio: "<<abajo<<endl; 		
		
}//main 

float calcular( float estatura[]){
      float acum = 0; 
 for(int i=0; i<25;i++ ){
     acum+= estatura[i];  
 }
 float prom = acum/ 25 ;
 return  prom; 
		
}// calcular 
int comparar(float estatura[],float prom ){
	  int comp=0; 
	  for(int i=0;i<25; i++ ){
	  	if(estatura[i]>prom){
	  		comp++; 
		  }
	  }
	  return comp; 
	}// comparar 