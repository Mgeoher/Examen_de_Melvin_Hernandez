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
	cout << "Ejercicio1 \nEjercicio2 \n";
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
	return 0;			
} 
	
return 0;	}