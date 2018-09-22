#include <stdio.h>
#include <stdlib.h>

int main(void){
	int opcion,num1=0,num2=0,suma=0,resta=0;
	int *p1;
	int *p2;
	
	// en este do while se encuentra el menu
do{
printf("seleccione lo que desea hacer:\n1-Ingresar dos numeros enteros.\n2-calcular su suma utilizando punteros.\n3-calcular su resta utilizando punteros.\n4-imprimir la direccion de memoria de cada variable.\n");	
scanf("%d",&opcion);

//si es la opcion 1 llenara los dos numeros
if(opcion==1){
//llena el numero 1
printf("ingrese el numero 1\n");
scanf("%d",&num1);

//llena el numero 2
printf("ingrese el numero 2\n");
scanf("%d",&num2);
p1=&num1;
p2=&num2;
}

//si la opcion es dos se ara la suma de punteros
if(opcion==2){
suma=*p1 + *p2;
printf("la suma de punteros es:\n %d",suma);
printf("\n");	
	
}

//se realiza la resta
if(opcion==3){
resta=*p1 - *p2;
printf("la resta de punteros es:\n %d",resta);
printf("\n");
}


//imprime la direccion de memoria de cada variable 
if(opcion==4){
	printf("\n");
printf("numero 1 \n%d",*p1);
printf("\n");
printf("direccion en memoria \n %p",p1);
printf("\n\n");
printf("numero 2 \n%d",*p2);
printf("\n");
printf("direccion en memoria \n %p",p2);	
printf("\n\n");	
}
//printf("se puede\n");


	
	
	}while(opcion<5 && opcion>0);









}
