#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int j;
    int n;
    int total = 1;
    printf("pick a number for X:");
    scanf("%d",&j);
    printf("pick a number for n:");
    scanf("%d",&n);
    if(j==0)
    total = 1;
    else{
 for (int i=0 ; i < n; i++)
 {
    total *= j;
 }
}
 printf("resault is : %d " , total);
    return 0;
}





