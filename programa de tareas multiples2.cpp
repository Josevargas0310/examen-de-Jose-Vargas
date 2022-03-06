#include<iostream>
#include<stdio.h>
#include<stdlib.h> 
using namespace std;

//funciones del codigo 
void menu(); 
int funcionfactorial(int num);

//declaracion de las variables 
int opcion; //variable del menu 
int a; //varible donde se guarda el numero ingresado del apartado de factorial 
int num; //varible que se utiliza en la funcion factorial 
int numero; //varible que se utilizara en el proceso de la tabla de multiplicar 
int i, vector[10]; //varible que se utiliza para la funcion de los numeros pares e impares 
int sumaT; // variable donde se aguardan los datos de la suma de los numeros pares e impare
int j;

//llamado de las funcion principal 
int main()
{
	menu();
	
 return 0;	
}

void menu(){ 
	printf("A continuacion digite el numero correspondiente a la funcion  que desea que se opere.");
	printf("\n 1. Calcular el factorial de un numero.  ");
	printf("\n 2. Tabla de multiplicar de un numero  ");
	printf("\n 3. Calculo de 10 numeros pares e impares");
	printf("\n 4. Dia laborales y de descanso ");
	printf("\n 5. Validacion de una contraseña ");
	
	printf("\n Digite la opcion deseada  ");
	scanf ("%i" , &opcion);


 switch (opcion)
{
	//funcionamiento del factorial de un numero 
	case 1: cout<<"Ingrese el numero que desea operar: "<<endl;
	cin>>a;
	cout<<"El factorial de "<<a<<" es "<<funcionfactorial(a)<<endl;
	break;
	
	//funcionamiento de la tabla de multiplicar de un numero 
	case 2:
	do {
	cout<<"Ingrese un numero de tipo entero para ver su tabla de multiplicar: "<<endl; 
	cin>>numero;
       } while ((numero<1 || (numero>1000000)));
       
	for (int j=1; j<=10; j++)
	{
	 cout<<numero<<" * "<<j<<" = "<<numero*j<<endl;	
	}
	break; 
	
	// funcionamiento de los numeros pares e impares 
	//este for nos ayuda con el pedido de los 10 numeros para luego guardarlo en el arreglo 
	case 3: for (i=0; i<10; i++){
    printf("ingrese el numero %d: ", i+1);
    scanf("%d", &vector[i]);
    
    //funcion que suma de los numeros ingresados 
    sumaT= sumaT+vector[i];
	}
	
	//este for busca dentro de los 10 numeros y los divide dentro de dos para verificar cuales son pares y cuales no
	printf("\nLos numeros pares que se ingresaron son: \n");
	for (i=0; i<10; i++)
	if (vector[i]%2==0) 
	printf("%d \t", vector[i]);
	
	//este for busca dentro de los 10 numeros y los divide dentro de dos para verificar cuales son impares 
	printf("\nLos numeros impares que se ingresaron son: \n");
	for (i=0; i<10; i++)
	if (vector[i]%2!=0) 
	printf("%d \t", vector[i]);
	
	
	//mensaje que se utiliza para mostrar la suma de todos los numeros 
	cout<<"\nLa suma de todos los numeros son: "<<sumaT<<endl;
	
	//se pone un salto de linea y unas pausas para que el programa no de fallos 
	printf("\n");
	system("pause");
	break;
	

	
		
		
}	
 } 
//se llama la funcion de factorial y se le declara el proceso que hara 
int funcionfactorial(int num)
	{
	int fact=1; //variable para una comparacion en while del aprtado de factoriales
	while(num>0)
	   {
	   	fact=fact*num--; 
		   }	
		   return fact;
	   
	}
