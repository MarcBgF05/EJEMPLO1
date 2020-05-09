#include "iostream"
using namespace std; 
int main()
{
    cout<<"OPERADORES DE DIRECCIONES"<<endl; 
    int a,b;
    int *p,*r;  
    float c, *w; 
    cout <<"la  direccion de a es: " << &a<<endl;
    cout <<"la direccion de b es: " << &b<<endl;
    cout <<"la direccion de c es: " << &c<<endl;
    p= &a;
    p=&b; 
    w=&c;   
    cout<<endl; 
    cout <<"la  direccion de a es: " << p<<endl;
    cout <<"la direccion de b es: " << r<<endl;
    cout <<"la direccion de c es: " << w<<endl;
    cout <<endl; 
}