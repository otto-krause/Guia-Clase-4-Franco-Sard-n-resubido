#include<stdio.h>
#include<stdlib.h>
int main()
{
float pre,t, tp;
int hora, an;
printf("¿Cuantas horas uso el servicio? ");
scanf("%d", &hora);
if (hora>=20){
pre=50*hora;}
else{
pre=50*20;
}
printf("¿Cuantos años tienes?");
scanf("%d",&an);
if (an>=70){
t=(pre-(pre*0.50));
}
else{
if (an>=60) {
t=(pre-(pre*0.30));
}
else {
if (an>=50){
t=(pre-(pre*0.20));
}
}
t=(pre);
tp=(t+(pre*0.33));
printf("Usted importo %f",t);
printf(" y con impuesto %f", tp);}
return 0;
}


