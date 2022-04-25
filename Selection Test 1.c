#include <stdio.h>

int main() {

    int A,B,C,D;


    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);

    if (B > C && D > A && C + D > A + B ){



        printf ("valores aceitos");
    }

    else printf ("valores nao aceitos");

    return 0;
}
