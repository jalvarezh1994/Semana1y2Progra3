#include <iostream>

using namespace std;
int multiplicar(int,int);
int factorial(int);

int main(){
	int opc;
	do{
		cout<<"Menu"<<endl;
		cout<<"1. Multiplicar 2 números"<<endl;
		cout<<"2. Sumar 2 números"<<endl;
		cout<<"2. Factorial"<<endl;
		cout<<"4. Salir"<<endl;
		cin>>opc;
		switch(opc){
			case 1:{
				int a, b;
	        		cout<<"Escriba el numero 1: ";
	        		cin>>a;
			        cout<<"Escriba el numero 2: ";
			        cin>>b;
				cout<<multiplicar(a,b)<<endl;
				break;}
			case 2:{
				int a, b;
                                cout<<"Escriba el numero 1: ";
                                cin>>a;
                                cout<<"Escriba el numero 2: ";
                                cin>>b;
				cout<<multiplicar(a,b)<<endl;
				break;}
			case 3:{
				int n1;
                                cout<<"Ingrese en numero: ";
                                cin>>n1;
                                cout<<factorial(n1)<<endl;
                                break;}
			case 4:{
				break;}
		}
	}while(opc!=4);
}

int multiplicar(int a,int b){
	return a*b;
}

int sumar(int a,int b){
        return a+b;
}

int factorial(int n){
	if(n==1||n==0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}
