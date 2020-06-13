#include "iostream"
using namespace std; 
 bool bisiesto( int anio );
int main(){
	int anio; 
	bool resp=0; 
	cout<<"ingrese el anio para comprobar si es bisiesto: \n"; 
	cin>>anio; 
    resp=bisiesto(anio); 
    if( resp == true)
    {
    	cout<<"Es bisiesto"; 
	}
	else
	{
		cout<<"No es bisiesto"; 
	}
}  //main 
	 bool bisiesto( int anio ){
	 	if( (anio%400 == 0)|| (anio%4 ==0)&&(anio%100 !=0)){
	return true;  
	}
	else{
		return false ; 
	}
    }