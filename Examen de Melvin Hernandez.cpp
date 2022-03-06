#include <iostream>
using namespace std;
int opejercicio; 

// Ejercicio 1
int n,i;
long double factorial; 
  					

//ejercicio 4
int dia;
   	
//ejercicio 5
char pass[10];
int correcto;
int intento;
const char contrasena[]="123456"; 
	   				
int main(int argc, char *argv[]){
	//Ejercicio 2
	int numero;
	do{
	cout << "Bienvenido \n";
	cout << "Que ejercicio desea realizar \n";
	cout << "Ejercicio1 \nEjercicio2 \nEjercicio3\nEjercicio4\nEjercicio5\n0-salir\n";
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
		
		}	break;
		case 4 : cout << "ingrese numero de dia ";
	cin >> dia;
	
	switch (dia){
		case 1 : cout << "Lunes Dia laboral";
		break;
		case 2 : cout << "Martes Dia laboral";
		break;
		case 3 : cout << "Miercoles Dia laboral";
		break;
		case 4 : cout << "Jueves Dia laboral";
		break;
		case 5 : cout << "Viernes Dia laboral";
		break;
		case 6 : cout << "Sabado Dia de descanso";
		break;
		case 7 : cout << "Domingo Dia de descanso";
		break;
	}
	return 0;	break;	
	
	case 5: intento=1;
    correcto=0;
    printf("Introduzca la contrasena: "); gets(pass); printf("\n");
    if (strcmp(pass,contrasena)==0) correcto=1;
    while ((correcto==0)&&(intento<3))
    {
        intento++;
        printf("Contrasena incorrecta. %i intento: ", intento); gets(pass); printf("\n");
        if (strcmp(pass,contrasena)==0) correcto=1;
    }
    if (correcto==0) printf("Se han excedido el numero de intentos.");
    else
        {
            printf("Bienvenido.");
            
        }
    return 0; break;
   
    default : cout << "Error intente de nuevo"; 
  }  system("cls");
	} while (opejercicio); 
	
return 0;	}