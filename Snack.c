#include <stdio.h>
#include <stdlib.h>


int main (){


float n1,n2,n3,n4,exame,media,media2;


scanf ("%f", &n1);
scanf ("%f", &n2);
scanf ("%f", &n3);
scanf ("%f", &n4);


media = (((n1*2)+(n2*3)+(n3*4)+(n4*1)) / 10);
printf ("Media: %.1f \n",media);


if (media >= 7.0){
    printf("Aluno aprovado.\n");

}

else if(media < 5.0){
    printf("Aluno reprovado.\n");
}

else {
    printf ("Aluno em exame.\n");
    scanf ("%f",&exame);
    printf ("Nota do exame: %.1f\n",exame);
    media2 = (exame + media)/2;

if (media2 > 5){
    printf ("Aluno aprovado.\n");
    printf ("Media final: %.1f \n",media2);
    }


    else {
           printf("Aluno reprovado.\n");
}

}
    return 0;
}


