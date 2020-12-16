#include<stdio.h>
#include<stdlib.h>
int main()
{
float pes, alt, imc;
printf("Ingresar su peso ");
scanf("%f",&pes);
printf("Ingresar medida ");
scanf("%f",&alt);
imc=pes/(alt*alt);
if (imc<20){
printf("tu peso es bajo");
}
else{
if (imc>=25) {
printf("tu peso es ideal");
}
else{
printf("tu peso es exedido");
}
}
}
