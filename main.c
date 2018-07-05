
#include <stdio.h>
#define DIGITOS 4

int main(void)
{
	char numero[DIGITOS] = {0};
	int i;
	
	printf("Ingrese su numero: ");
	scanf("%s", numero);
	fflush(stdin);
	printf("La inversion es: ");
	
	for(i = 2; i >= 0; i--)
		printf("%c", numero[i]);
		
	return 0;
}
