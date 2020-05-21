#include "iostream"
#include "conio.h"
#include "string.h" 
using namespace std; 
int main() //by Marcos Granillo 00028320 
{
	char palabra[40]; 
	int longi=0; 
    cout<<"ingrese una palabra:"<<endl; 
     cin.getline(palabra,40, '\n'); 
    longi= strlen(palabra);     
    cout<<longi<<endl; 
   if (longi>10){
   	cout<<"tu palabra es mayor a 10 caracteres "<<endl;
   }
   else {
   	cout<<"tu palabra es menor a 10 caracteres "<<endl; 
   }
   cout<<"el numero de caracteres es: "<<endl; 
   if (longi%2 ==0){
   	cout<<"par"; 
   }
   else {
   	cout<<"impar "; 
   	}
    getch(); 
}