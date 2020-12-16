#include<stdio.h>
#include<stdlib.h>
int main(){
int r1,r2, r3, r4, r5, rt;
printf("ingrese el valor de 5 resistencias");
scanf("%d%d%d%d%d",&r1,&r2,&r3,&r4,&r5);
rt=r1+r2+r3+r4+r5;
printf("El valor de la r1 es %d", r1);
printf(", el de la r2 es %d", r2);
printf(", el de r3 es %d", r3);
printf(", el de r4 es %d", r4);
printf(" y el de r5 es %d", r5);
printf(" y el valor total de la resistencias es %d", rt);
}
