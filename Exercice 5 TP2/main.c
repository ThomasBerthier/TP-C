#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,ligne,colonne;
    printf("Entrez la valeur de x : ");
    scanf("%d",&x);
    while((x<2)||(x>10))
    {
        printf("Entrez a nouveau la valeur de x : ");
        scanf("%d",&x);
    }
    for (ligne = 1; ligne <=10; ligne++)/*ligne verticale*/
        {
            for (colonne = 1; colonne <= x; colonne++)/*ligne horizontale*/
                {
                    printf ("%4d", ligne*colonne);
                }
            printf("\n");
        }


    return 0;
}
