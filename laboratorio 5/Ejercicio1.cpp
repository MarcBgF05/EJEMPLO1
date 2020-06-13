#include "iostream"              //by Marcos Granillo 000028320 
using namespace std;   
int mcd(int n1, int n2, int r); // n1 = numero uno, n2= numero 2, r = residuo 
int main()
{
	int n1,n2,r; 
	cout<<"MCD de dos numeros \n";
	cout<<"ingrese el numero mayor, luego el numero menor: \n ";
	cin>>n1>>n2; 
	cout<<"el MCD de los dos numeros es: "<<mcd(n1,n2,r)<<endl; 
}
int mcd(int n1, int n2, int r){
	do{
		r= n1%n2;
		if (r!= 0){
			n1=n2;
			n2=r;
		}
	} while( r!=0);
	return n2; 
}