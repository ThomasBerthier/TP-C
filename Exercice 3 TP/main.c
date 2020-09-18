#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float x;

    printf("entrez votre nombre");
    scanf("%f",&x);

    if(!x)
        printf("erreur de saisie");
    else
        printf("l'inverse du nombre est : %.2f",1/x);

    getch();
    return 0;
}
