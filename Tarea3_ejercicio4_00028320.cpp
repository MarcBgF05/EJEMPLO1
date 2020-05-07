#include "iostream"
using namespace std; 
int main()
{
   string prod; int c; float pr,Totg; 
   cout<<"Porfavor digita lo siguiente acerca del prodcuto comprado \n";
   cout<<"nombre:           "<<endl;cin>>prod; 
   cout<<"precio:           "<<endl;cin >>pr; 
   cout<<"cantidad:         "<<endl;cin >>c;
   Totg=c*pr;
   cout<<"el total gastado es:    "<<Totg; 
  
}