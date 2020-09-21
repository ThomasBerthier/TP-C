#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int i;
    float somme;
    srand(time(NULL));
    for(i=1;i<=30;i++)
    {
        somme+=rand()%20;
    }
    somme/=30;
    printf("La moyenne est de %.2f", somme);
    return 0;
}
