#include <iostream>

using namespace std;

void comparar(int,int);
int main(){

	
	int arreglo[5];  
  	for(int i = 0; i < 5; i++){
  		cout<<"Escriba un numero: ";
  		cin>>arreglo[i];
	}

  	cout<<endl<<"Los valores leidos son: "<<endl;

	for(int i=0;i<5;i++){
		cout<<arreglo[i]<<endl;
  	}

  	ejemplo();
  	int a,b;
  	cout<<"Ingrese el numero a: ";
  	cin>>a;
  	cout<<"Ingrese el numero b: ";
	cin>>b;
	comparar(a,b);
	return 0;
}

void comparar(int a,int b){
	if(a>b){
  		cout<<a<<" es mayor que "<<b<<endl;
	}else if(a==b)
		cout<<a<<" es igual a "<<b<<endl;
    	else{
    		cout<<b<<" es mayor que "<<a<<endl;
    	}
}
