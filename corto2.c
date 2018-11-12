#include <math.h>
#include <stdio.h>
struct puntos{
	int x1;
	int x2;
	
	int y1;
	int y2;
	
}p1;

int main(void){
	printf("ingrese el numero de x1");
	scanf("%d",&p1.x1);
	
		printf("ingrese el numero de x2");
	scanf("%d",&p1.x2);
	
		printf("ingrese el numero de y1");
	scanf("%d",&p1.y1);
	
		printf("ingrese el numero de y2");
	scanf("%d",&p1.y2);
	
	printf("distancia es %d", distancia(p1);
	
	}
	
	int distancia(struct puntos p1){
		int dista;
		
		dista = sqtr((pow(p1.x2-p1.x1,2))+(pow(p1.y2-p1.y1,2)));
		return dista;
		}
