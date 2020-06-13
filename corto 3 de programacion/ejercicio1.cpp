#include "iostream"  // by Marcos Granillo 00028320 
using namespace std; 
double calculos(int h, int he,double st, double sr); //h= hora, he=horas extras, st= salario total, sr = salario real
 int main (){                                        // ne= numero de empleados   
	int ne, h,he,sr;  
	cout<<"ingrese la cantidad de empleados a calcular su salario: \n"; 
	cin>>ne; 
	while(ne<=0)
	{
	cout<<"ingrese la cantidad de empleados a calcular su salario,correcto por favor: \n"; 
	cin>>ne; 	
	}
	cout<<"ingrese la cantidad de horas laboradas, y su horas extra si ha hecho: \n";
	cin>>h>>he;
	cout<<"su salario es de: "<<calculos(h,he,ne,sr); 
	
}
double calculos(int h, int he,double st, double sr){
	st=(h*1.75)+(he*2.50); 
	if(st>=500){
		sr= st-(st*0.04)-(st*0.0625)-(st*0.10); 
	}
	else
	{
		sr= st-(st*0.04)-(st*0.0625); 
	}
	return sr; 
}// calculos