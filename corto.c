
#include <stdio.h>

int fibonacci(int n);
//en el main se le da el tamaño a la secuencia fibonacci 
int main(){
	int numero;
	printf("ingrese el tamaño de la secuencia");
	
	//se ingresa 
	scanf("%d",&numero);
	fibonacci(numero);
	
	
	//imprime la secuencia fibonacci
	for(int i=1; i<=numero;i++){
		printf("%d  ",fibonacci(i));
		}
		return 0;
	}
	
	
//se crea la funcion con recursividad para los fibonnaci
int fibonacci(int n){
		if(n>2){
			return fibonacci(n-1)+fibonacci(n-2);
			}
			else{
				return 1;
				}
		}

