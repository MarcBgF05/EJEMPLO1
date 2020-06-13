#include "iostream"
using namespace std; 
int Numeromagico(int , int , int );  //NM = numero magico, N es el numer que ingresas
int main(){
	 int opci, centi=0; 
	 do{
	  	 int NM = 25, N,  i = 2; // el iterador comienza en dos, aunque al correr el numero de intentos si cumple con 5 veces 
        cout<<"Adivina el numero secreto \n"; 
		 cout<<"tienes cinco intentos\n";   
	 	  Numeromagico(NM,N,i); 
	 	cout<<"perdiste,Quieres intentar denuevo?\n"; 
	 	cout<<"digite 1 para comenzar nuevamtente\n"; 
	 	cout<<"digite cero para finalizar\n"; 
	 	cin>>opci; 
	 	while(opci<0 || opci>1)
	 	{
	 		cout<<"ingrese un valor valido por favor: \n"; 
	 		cin>>opci; 
		 }
	} while(opci!=centi);  
	}//main 
int Numeromagico(int NM, int N, int i){
         cout<<"ingrese un numero entre 1 y 100:  \n";
	 	 cin>>N; 
	 	 while(N<1 || N>100){
	 	   cout<<"ingrese un numero entre 1 y 100, correcto porfavor:  \n";
	 	 cin>>N;	
		  }
		  i = 2; 
	    do{ 
	  if (N<NM ){
	 		cout<<"es mas grande \n";
	        cout<<"ingrese un numero: \n"; 
	        cin>>N;		
	         cout<<"has usado: " << i++ << " de 5 intentos\n"; 
		 }
	 	else if (N>NM ){
	 		cout<<"es mas pequenio \n";
	        cout<<"ingrese un numero: \n"; 
	        cin>>N;
	         cout<<"has usado: " << i++ <<  " de 5 intentos\n"; 
	        }
	 	     if(N == NM)
	     	   {
	     	   	 
	     	   	cout<<"lo conseguiste\n"; 
				i =6; // en dado caso que el jugador adivine el numero antes que le acaben los intentos, el iterador se iguala a 
                }     // se iguala a 6 para cerrar el ciclo
	   }while(i<=5);  
}//numeromagico