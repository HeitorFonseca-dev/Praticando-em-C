#include <stdio.h>

int main (){

float x = 0,y = 0;

scanf ("%f %f",&x ,&y);


if (x == 0.0 && y == 0.0){
    printf ("Origem");
}
else if ( x == 0.0 && y != 0.0)
    printf ("Eixo Y");
else if ( x != 0.0 && y == 0.0)
    printf ("Eixo X");

else if (x > 0 && y > 0)
    printf ("Q1");
else if (x > 0 && y < 0 )
    printf ("Q4");
else if ( x < 0 && y > 0)
    printf ("Q2");
else {
    printf ("Q3");
}
}
