#include<stdio.h>
#include<stdlib.h>
int main()
{
int bas, alt, per, ar;
printf("Ingrese la base del rectangulo ");
scanf("%d",&bas);
printf("Ingrese la altura del rectangulo ");
scanf("%d",&alt);
per=(2*bas)+(2*alt);
ar=bas*alt;
printf("El perimetro del rectangulo es %d",per);
printf(" y su area es %d", ar);
return 0;
}
