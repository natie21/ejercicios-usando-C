#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[]) {
	int numero1,numero2,resmul,resres;
	printf("ingresa el primer numero" );
	scanf ("%d",&numero1);
	printf("ingresa el segundo numero ");
	scanf ("%d",&numero2);
	resmul=numero1 *numero2;
	printf("el resultado de tu multiplicacion es = ");
	printf("%d \n",resmul );
	resres=resmul-numero1;
	printf("el resultdo de la resta es = ");
	printf("%d \n",resres);
	
	
	char nombre[10];
	printf ("ingresa tu primer nombre \n");
	scanf("%s",nombre);
	//gets (nombre);
	printf("tu nombre es %s",nombre);
	return 0;
}

