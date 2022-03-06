#include<iostream>
#include<stdio.h>
#include<stdlib.h> 
using namespace std;

//funciones del codigo 
void menu(); 
int funcionfactorial(int num);

//declaracion de constantes 
#define CONTRA 123456 //constante donde esta guardada la contraseņa del sistema bancario 


//declaracion de las variables 
int opcion; //variable del menu 
int a; //varible donde se guarda el numero ingresado del apartado de factorial 
int num; //varible que se utiliza en la funcion factorial 
int numero; //varible que se utilizara en el proceso de la tabla de multiplicar 
int j;// variable que se utiliza en el for de la funcion de la tabla de multiplicar
int i, vector[10]; //varible que se utiliza para la funcion de los numeros pares e impares 
int sumaT; // variable donde se aguardan los datos de la suma de los numeros pares e impare
int dialab; //varible que nos ayuda con el procesos de los dias de la semana se utiliza para el guarado de la eleccion 
int codigo; // variable  donde aguardamos los datos de la contraseņa del sistema bancario 
int contador = 0; //variable que nos servira como contador para los intentos de la contrasela 
bool ingresa = false; //esta variable tipo boliana nos servira para saber si el usuario ingresa o no ingresa al sistema 


//llamado de las funcion principal 
int main()
{
	menu();
	
 return 0;	
}

//menu que se utiliza para darle opciones al usiario y que dependiendo esta se ejecute lo que el desee 
void menu(){ 
	printf("A continuacion digite el numero correspondiente a la funcion  que desea que se opere.");
	printf("\n 1. Calcular el factorial de un numero.  ");
	printf("\n 2. Tabla de multiplicar de un numero  ");
	printf("\n 3. Calculo de 10 numeros pares e impares");
	printf("\n 4. Dia laborales y de descanso ");
	printf("\n 5. Validacion de una contraseņa ");
	
	printf("\n Digite la opcion deseada  ");
	scanf ("%i" , &opcion);

//son todas las opciones que hay en el progrma, y dependiendo la elccion del usuario esta se ejecutara 
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
	case 3: cout<<"funcion de numeros pares e impares "<<endl; 
	for (i=0; i<10; i++){
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
	
	//funcion que hara el proceso de los dias de la semana que se trabaja y cuales no 
	case 4: 
	//mensaje que se le presenta al usuario para que eliga una opcion 
	cout<<"\n \t ingrese el numero de la semana que corresponde al dia que quiere saber si se trabaja o no"<<endl;
	cout<<"\n 1. Lunes, 2. Martes, 3. Miercoles, 4. Jueves, 5. Viernes, 6. Sabado, 7. Domingo"<<endl; 
	cin>>dialab;
	//se utiliza switch para mostrarle al usuario el pedido que nos hizo
	switch (dialab)
	{
		case 1: cout<<"\n Dia Lunes que aburrido. Pero animo es el primer dia de trabajo de la semana, SI ES UN DIA LABORAL. "<<endl;
		break; 
		case 2: cout<<"\n Dia Martes. ES UN DIA LABORAL "<<endl;
		break;
		case 3: cout<<"\n Dia Miercoles. Animo campe@n ya mero termina la semana, SI ES UN DIA LABORAL. "<<endl;
		break;
		case 4: cout<<"\n Dia Jueves. ES UN DIA LABORAL"<<endl; 
		break;
		case 5: cout<<"\n Dia Viernes y el cuerpo lo sabe. Pero, SI ES UN DIA LABORAL"<<endl; 
		break;
		case 6: cout<<"\n Dia Sabado, Bien campeon llegaste hasta aca, ES UN DIA LABORAL, pero solo se trabaja medio dia"<<endl;
		break;
		case 7: cout<<"\n Dia Domingo al fin descanso, NO ES UN DIA LABORAL"<<endl; 
	}
	
	// funcion que actuara como una banca virtual donde al usuario se le pide una contraseņa para poder ingresar 
	case 5: 
	
	do{
	
	//se le pide datos al usuario para ver si esta en lo correcto o no 
	cout<<"bienvendido a tu banca virtual para continuar porfavor ingresa tu contraseņa"<<endl;
	cin>>codigo; 
	//se ejecutan un if, else, para verificar si es verdadero o falsa la contraseņa
	if (codigo == CONTRA){
		ingresa = true; 
	}
	else {
		cout<<"\nla contraseņa es incorrecta"<<endl;
		contador++; 
	}
	//se verifica si los datos son verdaderos o falsos, si son verdaderos se inicia nuevamente el bucle, si es falso setermina. 
} while(ingresa== false && contador< 3); 
//nuevamente se hace apoyo de un if, else, para informarle al usuario si pudo entrar al sistema o no 
if (ingresa == false){
	cout<<"\n Ingreso una contraseņa incorrecta demasiadas veces, no pudo ingresar al sistema"<<endl;
}
else {
	cout<<"\n contraseņa correcta BIENVENIDO a tu banca virtual"<<endl;
}
	
		
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
