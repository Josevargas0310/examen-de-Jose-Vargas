#include <iostream>

//funciones del codigo 
void menu(); 

//declaracion de las variables 
int opcion; //variable del menu 

//llamado de las funciones 
int main()
{
	menu();
	
	return 0; 
}

void menu(){ 
	printf("a continuacion digite el numero correspondiente a la funcion  que desea que se opere operar.");
	printf("\n 1. calcular el factorial de un numero.  ");
	printf("\n 2.Tabla de multiplicar de un numero  ");
	printf("\n 3.calculo de 10 numeros pares e impares");
	printf("\n 4.dia laborales y de descanso ");
	printf("\n 5.validacion de una contraseña ");
	
	printf("\n Digite la opcion deseada");
	scanf ("%i" , &opcion);
	
	
}
