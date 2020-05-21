#include "iostream"
using namespace std; 
int main()  //by Marcos Granillo 00028320 
{
    int a,b; 
    cout<<"verificaremos si dos numeros son divisibles entre si"<<endl; 
    cout<<"Digite dos numeros: \n";
    cin>>a,b; 
     
    if (b%a == 0)
    {
        cout<<"Sus numeros son divisibles entre si "; 
    }
    else 
    {
        cout<<"Sus numeros son indivisibles entres si"; 
    }
}