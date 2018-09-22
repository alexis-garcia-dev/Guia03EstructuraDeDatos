#include<stdio.h>

int main(){
	
int res;
 int j,k=0;
 int *p1;
 int *p2;
int *resultado;
p1=&j;
p2=&k;
resultado=&res;
	int opcion;

	
	do{
		
		/*MENU PARA ELEGIR*/
	printf("1-Ingresar Numeros \n2-Calcular Suma\n3-Calcular Resta \n4-Imprimir Direccion De Memoria\n");
	scanf("%d",&opcion);
	
	if(opcion==1){
	
		printf("Ingresar el valor1\n");
		scanf("%d",&j);
		
		printf("Ingresar el valor2\n");
		scanf("%d",&k);
		
		
		/*CALCULA LA SUMA*/
		
		}else if(opcion==2){
			*resultado=*p1 + *p2;
			printf("El resultado de la suma es %d\n",*resultado);
			/*CALCULA LA RESTA*/
			}else if(opcion==3){
				*resultado=*p1 - *p2;
			printf("El resultado la resta es %d\n",*resultado);
				
				/*IMPRIME DIRECCION DE MEMORIA*/
				}else if(opcion==4){
					
					printf("\nPosicion : %p \n",&j);
					printf("\nPosicion : %p \n",p1);
					
					
					printf("\nPosicion : %p \n",&k);
					printf("\nPosicion : %p \n",p2);
					
					printf("\nPosicion : %p \n",&res);
					printf("\nPosicion : %p \n",resultado);
					
					
					}
		
		
		}while(opcion!=5);

	
	
	return 0;
	
	
	}
