#include <stdio.h>
#include <stdlib.h>

int main()
{
    int art;
    float prix, facture;
    printf("Nombres d'arcticles : ");
    scanf("%d",&art);
    printf("Prix de l'article : ");
    scanf("%f",&prix);
    facture=prix*art;
    if(facture>500)
    {
        facture=facture*0.9;
        printf("Votre facture est de %.2f euros",facture);
    }
    else
        printf("Votre facture est de %.2f euros",facture);
    return 0;
}
