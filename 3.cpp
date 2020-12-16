#include<stdio.h>
#include<stdlib.h>
int main()
{
int h,m,total;
float ph, pm;
printf("Ingrese cantidad de hombres ");
scanf("%d",&h);
printf("Ingrese cantidad de mujeres ");
scanf("%d",&m);
total=h+m;
ph=h*100/total;
pm=m*100/total;
printf("El porcentaje de hombres es %f", ph);
printf(" y el de mujeres es %f",pm);
}

