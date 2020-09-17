#include <stdio.h>
#include <stdlib.h>

int main()
{
    float note;
    printf("Entrez votre note : ");
    scanf("%f",&note);
        while((note<0)||(note>20))
        {
            printf("Entrez votre note a nouveau : ");
            scanf("%f",&note);

        }
    printf("Votre note rentrée est : " "%f",note);
    return 0;
}
