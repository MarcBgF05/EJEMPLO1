#include "iostream"
#include "conio.h"
#include "string.h" 
using namespace std; 
int main() //by Marcos Granillo 00028320 
{   
    char palabra[40];
	int p,longi=0; 
    cout<<"Determinaremos si la palabra que digites acontinuacion \ncomienza y termina con la misma letra o no \n"; 
	cout<<"ingrese una palabra"<<endl;
	cin.getline(palabra,40,'\n'); 
     longi= strlen(palabra); 
     p = longi-1;  
	if(palabra[0] == palabra[p] ) {
	 	cout<<"son las mismas "; 
	 }
	 else {
	 	cout<<"son diferentes"; 
	 }
   getch();    
}