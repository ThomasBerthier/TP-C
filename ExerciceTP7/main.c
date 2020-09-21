#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    float somme;
    srand(time(NULL));
    for(i=1;i<=30;i++)
    {
        somme+=rand()%20;
    }
    printf("La moyenne est de %f", somme);
    return 0;
}
