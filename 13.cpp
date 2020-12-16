#include<stdio.h>
#include<stdlib.h>
int main()
{
int n1, n2, n3;
printf("Ingrese 3 valores ");
scanf("%d%d%d",&n1,&n2, &n3);
if (n1==n2&&n2==n3){
printf("Los 3 valores son iguales");
}
else {
if (n1==n2||n2==n3||n1==n3){
printf("2 valores son iguales");
}
else {
printf("todos los valores son distintos");
}
}
}
