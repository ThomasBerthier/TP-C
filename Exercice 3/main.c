#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,note,nb,sup=0;
    printf("Entrez le nombres de notes : ");
    scanf("%d",&nb);
        for(i=0;i<nb;i++)
        {
            printf("entrez la note : ");
            scanf("%d",&note);
                while((note<0)||(note>20))
                {
                    printf("entrez la note a nouveau : ");
                    scanf("%d",&note);
                }

                if((note>10)&&(note<=20))
                {
                    sup++;
                }
        }
    printf("il y a : %d notes superieures a 10",sup);
    return 0;
}
