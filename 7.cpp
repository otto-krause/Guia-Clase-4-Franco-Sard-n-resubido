#include<stdio.h>
#include<stdlib.h>
int main()
{
int num, num1;
printf("Ingrese dos n�meros ");
scanf("%d",&num);
scanf("%d", &num1);
if (num==num1){
printf("Los dos n�meros son iguales");
}
else{
if (num>num1)
{
printf("El numero mayor es %d", num);
}
else{
printf("El numero mayor es %d", num1);
}
}
}
