#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb, i, nsup;
    float n;
    nsup=0;
    printf("Entrez le nombre de notes : ");
    scanf("%d",&nb);
    for(i=1;i<=nb;i++)
    {
        printf("Entrez votre note : ");
        scanf("%f",&n);
        while((n<0)||(n>20))
        {
            printf("Entrez votre note a nouveau : ");
            scanf("%f",&n);
        }
        if(n>10)
        {
            nsup++;
        }
    }
    printf("Il y a %d notes superieures a 10",nsup);
    return 0;
}
