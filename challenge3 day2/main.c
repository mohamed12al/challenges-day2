#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   int somme;
   printf("entrez le nombre n : ");
    scanf("%d", &n);

    if (n < 0) {
        printf(" Le nombre .\n");
        return 1;


         }


    printf("calculation de somme\n", n);

    for (int i = 1; i <= n; i++) {
        somme += i;

        printf("%d",i);
        if (i < n)
            printf(" + ");

    }





    return 0;
}
