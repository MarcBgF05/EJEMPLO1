#include "iostream"
#include "string.h"
using namespace std; 
int codigo(char palabra[], int j, int longi, int m, int u, int r, int c, int i, int e, int l, int a, int g, int o); 
int main(){
	int m=0,u=0,r=0,c=0,i=0,e=0,l=0,a=0,g=0,o=0; 
	int j= 0, longi; 
	char palabra[100]; 
	codigo(palabra,j,longi,m,u,r,c,i,e,l,a,g,o); 
	
}// main 
int codigo(char palabra[], int j, int longi, int m, int u, int r, int c, int i, int e, int l, int a, int g, int o){
    cout<<"convertir una palabra al codigo murcielago \n";
	cout<<"ingrese una palabra:  "<<endl; 
	cin.getline(palabra,100); 
	
 	longi= strlen(palabra); 
	for( j=0; j<longi; j++){
             switch(palabra[j]){
             case 'm': palabra[j]='0'; break; 
			 case 'u': palabra[j]='1'; break; 
			 case 'r': palabra[j]='2'; break; 
			 case 'c': palabra[j]='3'; break; 
			 case 'i': palabra[j]='4'; break; 
			 case 'e': palabra[j]='5';break; 
			 case 'g': palabra[j]='6'; break; 
			 case 'a': palabra[j]='7'; break;  
			 case 'l': palabra[j]='8'; break; 
			 case 'o': palabra[j]='9';  break; 	
			 }//sw 		
		
	 }// for 
	cout<<"la palabra es: "<<palabra; 
	
	
}// main 