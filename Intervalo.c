#include <stdio.h>
#include <stdlib.h>


int main (){

float valor_intervalo ;


scanf ("%f",&valor_intervalo);


if (valor_intervalo >= 0 && valor_intervalo <= 25){
    printf ("intervalo [0,25]\n");
}
else if (valor_intervalo > 25 && valor_intervalo <= 50)
    printf("Intervalo (25,50]\n");

else if (valor_intervalo >= 75 && valor_intervalo <= 100)
    printf ("Intervalo (75,100]\n");

else{
    printf ("Fora de intervalo\n");
}

return 0 ;

}
