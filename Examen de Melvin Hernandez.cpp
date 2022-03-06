#include <iostream>
using namespace std;
int opejercicio; 

// Ejercicio 1
int n,i;
long double factorial; 
  					

   					
int main(){
	
	cout << "Bienvenido \n";
	cout << "Que ejercicio desea realizar \n";
	cout << "Ejercicio1 \n";
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
} 
	
return 0;	}