#include "iostream"
using namespace std;
int matriz(int numeros[][5] , int estudiasntes, int notas  ); 
int calcular(int numeros[][5],int estudiantes, int notas); 
int main(){
	     int n; 
		int numeros[n][5],estudiantes,notas;
		float acum=0, prom=0; 
		matriz(numeros,estudiantes,notas); 
		calcular(numeros, estudiantes, notas); 
}//main 
int matriz(int numeros[][5], int estudiantes, int notas  ){
	int n,i=0;
	float acum,prom=0; 
	cout<<"ingrese la cantidad de estudiantes: "; 
	cin>>n; 
	for(int i=0; i<n; i++){

		for(int j=0; j<5; j++){
		cout<<"Digite la nota ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j]; 
		}// for notas 
	}//for estudiantes 
	cout<<"\nMostrando las notas\n\n";
	for(int i=0; i<n; i++){
		cout<<"estudiante "<< i <<" : "; 
		for(int j=0 ; j<5; j++){
			cout<<numeros[i][j]<<" | ";  
		}// j
		cout<<endl;
	}// for2
	cout<<endl;
 
}	// matriz
int calcular(int numeros[][5],int estudiantes, int notas) {
	 int n; 
		for(int i=0;i<n; i++){
    	float acum=0,prom=0;
 for(int j=0; j<5;j++){
   	acum+=numeros[i][j]; 
       prom=acum*0.20; 
   	}
	
	if(prom>6){
		cout<<"estudiante "<< i << " aprobado con promedio de: "<<prom<<endl ; 
	}
	else{
		cout<<"estudiante "<<  i<< " reprobado con promedio de: "<<prom<<endl;
	}
	}//for para preguntar sobre la nota del estudiante 
	
	}// calcular 