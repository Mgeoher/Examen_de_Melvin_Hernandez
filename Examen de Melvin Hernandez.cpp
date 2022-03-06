#include <iostream>
using namespace std;
int opejercicio; 

// Ejercicio 1
int n,i;
long double factorial; 
  					


   					
int main(int argc, char *argv[]){
	//Ejercicio 2
	int numero;
	cout << "Bienvenido \n";
	cout << "Que ejercicio desea realizar \n";
	cout << "Ejercicio1 \nEjercicio2 \nEjercicio3\n";
	cin >> opejercicio ;
	switch (opejercicio){
		case 1: 	  					
   					cout << "Ingrese un numero: ";
   					cin >> n;
   					factorial=1;
   					for(i=1;i<=n;i++)
        				factorial = factorial * i;
   					cout << endl << "Factorial de " << n << " -> " << factorial << endl;
   					system("pause");
   					break;
   		case 2: 
		   			do{
					cout<<"Ingrese un numero: ";
					cin>>numero;
		
						}while((numero<1) || (numero>10));
	
						for(int i=1; i<=10; i++){
							cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
					} break;
	return 0; // ejercicio 3
		case 3: {int n, cp=0,ci=0,c=0,x;
		cout<<"Ingresar cantidad de numeros:";
		cin>>n;
		while (c<n)
		{
		cout<<"Ingresar numero:";
		cin>>x;
		if(x % 2==0)
		cp=cp+1;
		else
		ci=ci+1;
		c=c+1;
		}
		cout<<"los numeros pares son:"<<cp<<endl;
		cout<<"los numeros impares son:"<<ci<<endl;
		
		}			
} 
	
return 0;	}