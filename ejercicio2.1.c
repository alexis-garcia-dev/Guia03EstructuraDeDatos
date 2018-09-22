#include<stdio.h>
int main(){
	int n[]={9,2,3,4,5,6,7,8,9};
	int m[]={9,8,7,6,5,4,3,2,0};
	int *pn;
	int *pm;
	int *aux;
	int i;
	pn=n;
	pm=m;
	
	/*intercambio de vectores*/
	for (i = 0; i <9; i++)
	{
		aux=pn;
		pn=pm;
		pm=aux;
		
		
	}
	/*Imprimimos el vector ya intercambiado*/
	printf("Intercambio\n");
	for (i = 0; i < 9; i++)
	{
		printf("Elementos del vectorN %d \n",*pn);
		pn++;
	}
	
	printf("Intercambio\n");
		for (i = 0; i < 9; i++)
	{
		printf("Elementos del vectorM %d \n",*pm);
		pm++;
	}
	
	
	
	
	
	
	
	
	
	return 0;
	}
