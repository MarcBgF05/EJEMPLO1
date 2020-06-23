#include "iostream"
using namespace std; 
int main()
{
	int a[199], cont =0; 
	for (int i=1; i<=199; i++){
		if(i%2!=0){
			a[cont]=i; 
			cont++; 
		}
	}
	for(int i =cont ; i>=0; i-- )
	{
		cout<<" "<<a[i]; 
	}
}//main 