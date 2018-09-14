#include <stdio.h>
#include <stdlib.h>

void binarios();
void gray();
void enteros();
void reales();

int main()
{
	int continuar=1,seleccion=0;

	while(continuar==1)
	{
		printf("Bienvenido, ingresa el tipo de individuos que quieres crear\n1.-Binarios\n2.-Gray\n3.-Enteros\n4.-Reales\n5.-Salir\n");
		scanf("%d",&seleccion);
		switch(seleccion)
		{
			case 1:
				binarios();
			break;
			case 2:
				gray();
			break;
			case 3:
				enteros();
			break;
			case 4:
				reales();
			break;
			case 5:
				continuar=0;
			break;
			default:
				printf("Seleccion invalida\n");
			break;
		}
	}
	return 0;
}
void binarios()
{
	long ltime;
	ltime=time(NULL);
	int a,stime;
	stime=(unsigned)ltime/2;
	srand(stime);
	printf("Ingresa el numero de alelos que quieres en tus individuos\n");
	scanf("%d",&a);
	int individuos[10][a];
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<a;j++)
		{
			individuos[i][j]=rand()%2;
		}
	}
	printf("Individuos creados\n");
	for(int i=0;i<10;i++)
	{
		printf("Individuo %d\n",i+1);
		for(int j=0;j<a;j++)
		{
			printf("%d|",individuos[i][j]);
		}
		printf("\n");
	}
}
void gray()
{
	long ltime;
	ltime=time(NULL);
	int a,stime;
	stime=(unsigned)ltime/2;
	srand(stime);
	printf("Ingresa el numero de alelos que quieres en tus individuos\n");
	scanf("%d",&a);
}
void enteros()
{
	long ltime;
	ltime=time(NULL);
	int a,stime;
	stime=(unsigned)ltime/2;
	srand(stime);
	printf("Ingresa el numero de alelos que quieres en tus individuos\n");
	scanf("%d",&a);
}
void reales()
{
	long ltime;
	ltime=time(NULL);
	int a,stime;
	stime=(unsigned)ltime/2;
	srand(stime);
	printf("Ingresa el numero de alelos que quieres en tus individuos\n");
	scanf("%d",&a);
}