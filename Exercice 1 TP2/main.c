#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, mem;
    printf("Entrez la valeur de a : ");
    scanf("%d",&a);
    printf("Entrez la valeur de b : ");
    scanf("%d",&b);
    mem=a;
    for(i=1;i<b;i++)
    {
        a+=mem;
    }
    printf("le produit est de %d",a);
    return 0;
}
