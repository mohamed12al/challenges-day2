#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("le nombre multiblication");
    scanf("%d",&nombre);
    printf("la table de multiplication %d",nombre);

    for (int i = 1; i <= 10; i++)
       printf("%d * %d = %d\n", nombre, i , nombre * i);



    return 0;
}
