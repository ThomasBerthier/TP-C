#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,ligne,colonne,nligne, un;
    printf("Entrez la valeur de x : ");
    scanf("%d",&x);
    while((x<2)||(x>10))
    {
        printf("Entrez a nouveau la valeur de x : ");
        scanf("%d",&x);
    }
    printf("    ");
    for(un=1; un<=x; un++)
    {
       printf("%4d",un);

    }
       printf("\n");
    for (ligne = 1; ligne <=10; ligne++)/*ligne verticale*/
        {
            nligne++;
            printf("%4d",nligne);
            for (colonne = 1; colonne <= x; colonne++)/*ligne horizontale*/
                {
                    printf ("%4d", ligne*colonne);

                }
            printf("\n");
            /*printf("%4d",ligne);*/
        }


    return 0;
}
