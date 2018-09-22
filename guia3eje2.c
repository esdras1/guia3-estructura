#include<stdio.h>
#include<stdlib.h>

int main(){
	int tam;
	
	int *p1=0;
	int *p2=0;
		int *p=0;
		
		//pide el tamaño de los vectores los dos tendran el mismo
	printf("ingrese el tamaño de los vectores");
	scanf("%d",&tam);
	
	int vector1[tam];
	int vector2[tam];
	

	
	//lenado de los vectores
	for(int i=0;i<tam;i++){
		int valor;
		printf("ingrese valor %d",(i+1));
		scanf("%d",&valor);
		vector1[i]=valor;
		}


	for(int i=0;i<tam;i++){
		int valor;
		printf("ingrese valor %d",(i+1));
		scanf("%d",&valor);
		vector2[i]=valor;
		}
	
	//se asigna el vector al puntero
	p1=&vector1;
    p2=&vector2;
    
    //muetra como estan los vectores con los valores en el orden ingresados
    	printf("valores en el orden ingresado\n");
    	printf("vector 1 \t vector 2\n\n");
    	for(int i=0;i<tam;i++){
			
			printf("  \n%d  ",*p1);
			printf("\t \t");
			printf("  %d  ",*p2);
			printf("\n");
			p1++;
			p2++;
			//en esta impresion por puntero se cambia la direccion de memoria
			//o no se que es por eso abajo volvi hacer la asignacion
			//del vector al puntero xq si no no imprime bien
		}
	
	
	//se asigna nuevamente los vectores al puntero 
	// 
	//al quitar estos ya no hace lo esperado :) 
   p1=&vector1;
   p2=&vector2;
    
    
    //imprime los vectores cambiados 
    //cambio sin usar variable auxiliar
    printf("\n\nvector 1 \t vector 2.  ya cambiados\n");
	for(int j=0;j<tam;j++){
		
		*p1=*p1+*p2;
		*p2=*p1-*p2;
		*p1=*p1-*p2;
		
		
		
		
		printf("  \n%d  ",*p1);
		printf("\t \t");
		printf("  %d  ",*p2);
		printf("\n");
		
		p1++;
		p2++;
		}
		
		
		return 0;
}
