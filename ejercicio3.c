#include<stdio.h>
int main(){
	int vector[]={1,2,3,4,5,6,7,8,9};
	int *p;
	int i;
	
	
	p=vector;
	
	printf("Elementos del vector\n");
	/*IMPRIMIMOS EL VECTOR NORMAL*/
	
for (i = 0; i < 9; i++)
{
	printf("Datos: %d \n",*p);
	p++;
}
/*IMPRIMIMOS EL VECTOR EN REVERSA*/
printf("Elementos Del vector En Reversa\n");
for (i = 9; 0<i ; i--)
{
	printf("Datos:%d\n",*p);
	
}


	return 0;
	}
