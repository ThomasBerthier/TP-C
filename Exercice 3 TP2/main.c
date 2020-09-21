#include <stdio.h>
#include <stdlib.h>

int main()
{
    int poids;
    printf("Entrez le poids : ");
    scanf("%d",&poids);
    if(poids<20)
    {
        printf("Le tarif est de 3.00 frs");
    }
    if((20<=poids)&&(poids<50))
    {
        printf("Le tarif est de 3.95 frs");
    }
    if(poids>=50)
    {
        printf("Le tarif est de 5.90 frs");
    }
    return 0;
}
