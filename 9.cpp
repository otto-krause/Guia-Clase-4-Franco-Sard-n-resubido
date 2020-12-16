#include<stdio.h>
#include<stdlib.h>
int main()
{
float a,b,c, hora, total;
char cat;
a=200;
b=180;
c=150;
printf("Ingresa tu categoria ");
scanf("%c",&cat);
printf("Ingrese cuantas horas trabajo");
scanf("%f",&hora);
if (cat=='a'){
total=hora*a;
}
else {
if (cat=='b'){
total=hora*b;
}
else{
if (cat=='c'){
total=hora*c;
}
else {
total=0;
}
}
}
printf("Su categoria es %c",cat);
printf(" y su sueldo es %f", total);
}
