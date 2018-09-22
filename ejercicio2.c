#include<stdio.h>
int main(){
	
	int tam;
	int i;
	/*INGRESAMOS EL TAMAÑO DEL VECTOR*/
	printf("Ingresar Tamaño del vector\n");
	scanf("%d",&tam);
	int vector[tam];
	int vector2[tam];
	int *vect;
	int *vect2;
	int *aux;
	
	
	

	/*INGRESAMOS ELEMENTOS AL VECTOR*/
printf("Elementos del vector1\n");	
	for (i = 0; i <tam ; i++)
	{
		printf("Elementos [%d] \n",i);
		scanf("%d",&vector[i]);
	}
		/*INGRESAMOS ELEMENTOS AL VECTOR*/
printf("Elementos del vector2\n");
	
	for (i = 0; i <tam ; i++)
	{
		printf("Elementos [%d] \n",i);
		scanf("%d",&vector2[i]);
	}
	
	
	vect = vector;

		vect2 = vector2;
		/*cambio de vectores*/
	
	aux=vect;
	vect=vect2;
	vect2=aux;
	
	/*VECTOR YA INTERCAMBIADO*/
	printf("Intercambio vector1\n");
		for (i = 0; i < tam; i++)
	{
		
		printf("Dato vector[%d] : %d \n",i,*vect);
		printf("\n\n");
		vect++;
	}
	
	/*VECTOR YA INTERCAMBIADO*/
	printf("Intercambio vector2\n");
		for (i = 0; i < tam; i++)
	{
		
		printf("Dato vector[%d] : %d \n",i,*vect2);
		printf("\n\n");
		vect2++;
	}
	
	
	
	
	
	
	return 0;
	}
