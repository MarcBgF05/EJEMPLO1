#include "iostream"   //by Marcos Granillo 000028320 
using namespace std;  // h= hora, m = minutos, s = segundos
int main (){
	int h,m,s; 
	cout<<"introduzca la hora, minutos y segundo:  \n"; 
	cin>>h>>m>>s; 
if( (h>=0 && h<=23) && (m>=0 && m<=59) && (s>=0 && s<=59)  ){
		s++; 
		if (s==60) {
			s=00;
			m++; 
		}//if
		else if(m==60){
			m=00; 
			h++; 
		}
		else if (h ==24){
			h=00; 
		}
		cout<<" un segundo despues la hora es; "<<h<<" :"<<m<<" :"<<s; 
	}//while 
	else{
		cout<<" no es una hora correcta "; 
	}
}