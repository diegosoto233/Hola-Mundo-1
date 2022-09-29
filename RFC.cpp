#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char Nombre[20];
	char Apellido[20];
	char Apellido2[20];
	char RFC[11];
	int dia, mes, año;


	printf("Nombre: "); scanf_s("%s", &Nombre, 20);
	printf("Apellido Paterno: "); scanf_s("%s", &Apellido, 20);
	printf("Apellido Materno: "); scanf_s("%s", &Apellido2, 20);

	RFC[0] = toupper(Apellido[0]);
	RFC[1] = toupper(Apellido[1]);
	RFC[2] = toupper(Apellido2[0]);
	RFC[3] = toupper(Nombre[0]);
	RFC[4] = '\0';

	printf("Dia de Naciemiento: "); scanf_s("%d", &dia);
	printf("Mes de Nacimiento: "); scanf_s("%d", &mes);
	printf("Año de Naciemiento: "); scanf_s("%d", &año);

	printf("Su RFC es: %s%02i%02i%02i\n", RFC, año, mes, dia); 
}