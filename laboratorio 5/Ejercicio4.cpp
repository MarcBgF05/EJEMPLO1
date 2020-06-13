#include "iostream"  // by Marcos Granillo 00028320 
using namespace std; 
int main(){
	int d,m,a,opci;// d= dia, m= meses, a= años 
    cout<<"ingrese el dia, mes y anio: \n";
	cin>>d>>m>>a;
	    while(m<=0 || m>=13)
	    {
	        cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	cin>>d>>m>>a;   
			
		}
		if(  (a%400 == 0)||(a%4 ==0)&&(a%100 !=0) ){
		 opci= 1;   
		 }
	else{
	opci= 2; 
	}
		switch(m){
			case 1 :{//inicio case 
				     while(d<=0 || d>=32){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;  
					 }
				break;
			}// fin case 
			case 2 :{//inicio case 
				    if(opci==1){
				    	 while(d<=0 || d>=30){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;
					}  // while 
					 } // opci 1 
					 else {
					 	 while(d<=0 || d>=29){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;
					}  // while 
					 }
				break;
			}// fin case
			case 3 :{//inicio case 
				     while(d<=0 || d>=32){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;  
					 }
				break;
			}// fin case
			case 4 :{//inicio case 
				     while(d<=0 || d>=31){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;  
					 }
				break;
			}// fin case 
			case 5 :{//inicio case 
				     while(d<=0 || d>=32){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;  
					 }
				break;
			}// fin case 
			case 6 :{//inicio case 
				     while(d<=0 || d>=31){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;  
					 }
				break;
			}// fin case 
			case 7 :{//inicio case 
				     while(d<=0 || d>=32){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;  
					 }
				break;
			}// fin case 
			case 8 :{//inicio case 
				     while(d<=0 || d>=32){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;  
					 }
				break;
			}// fin case 
			case 9 :{//inicio case 
				     while(d<=0 || d>=31){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;  
					 }
				break;
			}// fin case 
			case 10 :{//inicio case 
				     while(d<=0 || d>=32){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;  
					 }
				break;
			}// fin case 
			case 11 :{//inicio case 
				     while(d<=0 || d>=31){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;  
					 }
				break;
			}// fin case 
			case 12 :{//inicio case 
				     while(d<=0 || d>=32){
				    cout<<"ingrese el dia, mes y anio, correcto por favor: \n";
        	           cin>>d>>m>>a;  
					 }
				break;
			}// fin case   
		}//sw 
	 	
	 switch(opci){
		case 1:{
		if( (m==1||m==3||m==5||m==7||m==8||m==10)&&  (d==31) )
		{
		  m++; 
		} 	
	    else if ((m==4||m==6||m==9||m==11)&& d==30 ){
		    m++; 
			} 
		else if(m==2 && d==29){  
		   m++; 
		   d=0;
		    }
		else{ cout<<"datos incorrectas "; 
		}	
		if (m==12 && d==31){ 
		d=0; 
		++a; 
		m=0; 
		m++; 
	 
	  }
		   cout<<" la fecha un dia despues es: \n"<<++d<<" / "<<m<<" / "<<a;
			break;
		}//case 1
		case 2: {
			if( (m==1||m==3||m==5||m==7||m==8||m==10)&&  (d==31) ){ 
			m++; 
			} 	
	    else if ((m==4||m==6||m==9||m==11)&& d==30 ){
		m++; 
		} 
		else if(m==2 && d==28){ 
		m++;
		d=0;  
		}
		else{
		 cout<<"datos incorrectas "; 
		 }	
		if (m==12 && d==31){ 
		a++;
		 m=0;
		m++; 
		  d=0;}
		cout<<" la fecha un dia despues es: \n"<<++d<<" / "<<m<<" / "<<a;
		 break;
		}//case 2 
		default:  {
			cout<<"no coincide nada"; 
			break;	}
	}//sw 
}// main 