#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long long fact = 1;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("entre le nombre negatif");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d! = %d\n", n, fact);




    return 0;
}
