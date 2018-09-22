#include<stdio.h>
#include<stdlib.h>

int main(){
int valor,tam;
int *p;

printf("ingrese el tamaño del vector  ");

scanf("%d",&tam);

int vector[tam];

//llenando el vector
for(int i=0;i<tam;i++)
{
printf("valor %d",(i+1));
printf(".  ");
scanf("%d",&valor);

vector[i]=valor;
	
}

//se asigna el vector al puntero pero desde la ultima posicion
p=&vector[tam-1];

//imprimiendo alreves
printf("\n");
printf("imprimiendo el vector en reversa");

for(int i=tam;i>0;i--){
	
	 printf("\n");
	 
		 printf("%d",*p);
		 printf("\n");
              p--;
	}


           
}
