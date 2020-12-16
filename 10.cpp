#include<stdio.h>
#include<stdlib.h>
int main()
{
float sueld, total, aum;
int cat, hijo;
printf("Ingrese su sueldo basico ");
scanf("%f", &sueld);
printf("Ingrese su categoria ");
scanf("%d", &cat);
printf("Ingrese su cant. de hijos ");
scanf("%d",&hijo);
if (cat==2){
aum=sueld+( sueld*20/100);
}
else{
if (cat==1) {
aum=sueld+(sueld*10/100);
}
}
if (hijo>4){
total=aum+(hijo*300) +200;
}
else{
total=aum+(hijo*300);
}
printf("su sueldo es %f",total);
return 0;
}



