#include<iostream>
using namespace std;

//funciones del codigo 
void menu(); 
int funcionfactorial(int num);

//declaracion de las variables 
int opcion; //variable del menu 
int a; //varible donde se guarda el numero ingresado del apartado de factorial 
int num;

//llamado de las funciones 
int main()
{
	menu();
	
 return 0;	
}

void menu(){ 
	printf("A continuacion digite el numero correspondiente a la funcion  que desea que se opere.");
	printf("\n 1. calcular el factorial de un numero.  ");
	printf("\n 2.Tabla de multiplicar de un numero  ");
	printf("\n 3.calculo de 10 numeros pares e impares");
	printf("\n 4.dia laborales y de descanso ");
	printf("\n 5.validacion de una contraseña ");
	
	printf("\n Digite la opcion deseada");
	scanf ("%i" , &opcion);


 switch (opcion)
{
	case 1: cout<<"Ingrese el numero que desea operar: "<<endl;
	cin>>a;
	cout<<"El factorial de "<<a<<" es "<<funcionfactorial(a)<<endl;
	
	break;
	
	
	
	
}	
 } 
//se llama la funcion y se le declara el proceso que hara 
int funcionfactorial(int num)
	{
	int fact=1; //variable para una comparacion en while del aprtado de factoriales
	while(num>0)
	   {
	   	fact=fact*num--; 
		   }	
		   return fact;
	   
	}
