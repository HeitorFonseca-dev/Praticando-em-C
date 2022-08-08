#include <stdio.h>
#include <stdlib.h>


int main (){


float nota1,nota2,nota3,nota4,exame,media,nota_recuperacao;
int peso_nota1 = 2;
int peso_nota2 = 3;   
int peso_nota3 = 4;
int peso_nota4 = 1;
    
scanf ("%f", &nota1);
scanf ("%f", &nota2);
scanf ("%f", &nota3);
scanf ("%f", &nota4);


media = (((nota1*peso_nota1)+(nota2*peso_nota2)+(nota3*peso_nota3)+(nota4*peso_nota4)) / 10);
printf ("Media: %.1f \n",media);


if (media >= 7.0){
    printf("Aluno aprovado.\n");

}

else if(media < 5.0){
    printf("Aluno reprovado.\n");
}

else {
    printf ("Aluno em exame.\n");
    scanf ("%f",&exame_recuperacao);
    printf ("Nota do exame: %.1f\n",exame_recuperacao));
    nota_recuperacao = (exame_recuperacao) + media)/2;

    if (nota_recuperacao > 5){
         printf ("Aluno aprovado.\n");
         printf ("Media final: %.1f \n",nota_recuperacao);
    }


    else {
           printf("Aluno reprovado.\n");
}

}
    return 0;
}


