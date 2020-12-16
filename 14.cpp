#include<stdio.h>
#include<stdlib.h>
int main()
{
float h,m,s, total;
int un;
printf("Ingrese hora ");
scanf("%f",&h);
printf("Ingrese minutos ");
scanf("%f",&m);
printf("Ingrese segundos ");
scanf("%f",&s);
printf("Ingrese una unidad");
scanf("%d", &un);
if (un==1) {
total=s+(h*60*60)+(m*60);
printf("Segundo: %f", total);
}
else{
if (un==2) {
total=m+(h*60)+(5/60);
printf("Minutos: %f", total);
}
else{
if (un==3){
total=h+(m/60)+(s/60/60);
printf("hora: %f", total);
}
}}
}

