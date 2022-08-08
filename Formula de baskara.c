#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

float valor_de_a,valor_de_b,valor_de_c,valor_de_delta,x_linha,xx_linha;

scanf ("%f",&valor_de_a);
scanf ("%f",&valor_de_b);
scanf ("%f",&valor_de_c;

valor_de_delta = (valor_de_b*valor_de_b) - (4*valor_de_a*valor_de_c);

if (valor_de_delta<0){
    printf ("impossivel calcular\n");
}

else if(valor_de_a == 0)
    printf ("impossivel calcular");



else {
    x_linha = (-b + sqrt(x)) / (a + a);
    xx_linha = (-b - sqrt(x)) / (a + a);
    printf ("R1 = %.5f\n", x_linha);
    printf ("R2 = %.5f\n", xx_linha);
}




return 0;







}
