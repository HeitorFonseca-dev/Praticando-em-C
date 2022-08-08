#include <stdio.h>

int main (){

float eixo_x = 0,eixo_y = 0;

scanf ("%f %f",&eixo_x ,&eixo_y);


if (eixo_x == 0.0 && eixo_y == 0.0){
    printf ("Origem");
}
else if ( eixo_x == 0.0 && eixo_y != 0.0)
    printf ("Eixo Y");
else if ( eixo_x != 0.0 && eixo_y == 0.0)
    printf ("Eixo X");

else if (eixo_x > 0 && eixo_y > 0)
    printf ("Q1");
else if (eixo_x > 0 && eixo_y < 0 )
    printf ("Q4");
else if ( eixo_x < 0 && eixo_y > 0)
    printf ("Q2");
else {
    printf ("Q3");
}
}
