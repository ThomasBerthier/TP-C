#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age, cine, fastfoodint;
    char sexe;
    char fastfood;
    char sport;
    char choix;
    int Z;
    char redo;
    while(Z=1)
    {
    printf("Quel est ton age ?\n");
    scanf("%d",&age);
    fflush(stdin);
    printf("Est tu un homme?\nH=Homme F=Femme\n");
    scanf("%c",&sexe);
    fflush(stdin);
    printf("Combien de fois par mois vas-tu au cinema ?\n");
    scanf("%d",&cine);
    fflush(stdin);
    printf("Tu preferes le Quick ou le Mac Donald ?\nQ=Quick M=Mac Donalds\n");
    scanf("%c",&fastfood);
    fflush(stdin);
    printf("Combien de fois par mois vas-tu a ce fast food ?\n");
    scanf("%d",&fastfoodint);
    fflush(stdin);
    printf("Fais-tu du sport ?\nOUI=Y NON=N\n");
    scanf("%c",&sport);
    if(sport=='Y')
    {
        printf("Quel sport fais tu ?\nFoot=F\nTennis=T\nBasket=B\nJudo=J\nNatation=N\nAutre=A\n");
        fflush(stdin);
        scanf("%c",&choix);
        fflush(stdin);
    }
    printf("\nTu as %d ans\n",age);
    if(sexe=='H')
    {
        printf("Tu est un homme\n");
    }
    else
    {
        printf("Tu est une femme\n");
    }
    printf("Tu vas au cine %d fois par mois\n",cine);
    if(fastfood=='M')
    {
       printf("Tu preferes le Mac Donalds\n");
    }
    else
    {
        printf("Tu preferes le Quick\n");
    }

    printf("Tu vas au fast food %d fois par mois\n",fastfoodint);
    if(sport=='Y')
    {
        printf("Tu fais du sport\n");
    }
    else
    {
        printf("Tu ne fais pas de sport\n");
    }
    if((sport=='Y')&&(choix=='F'))
    {
        printf("Tu fais du foot");
    }
    if((sport=='Y')&&(choix=='T'))
    {
        printf("Tu fais du tennis");
    }
    if((sport=='Y')&&(choix=='B'))
    {
        printf("Tu fais du basket");
    }
    if((sport=='Y')&&(choix=='J'))
    {
        printf("Tu fais du judo");
    }
    if((sport=='Y')&&(choix=='N'))
    {
        printf("Tu fais de la natation");
    }
    if((sport=='Y')&&(choix=='A'))
    {
        printf("Tu fais un autre sport que ceux cites\n");
    }
    printf("\nVeux-tu recommencer ?\nOUI=Y NON=N\n");
    scanf("%c",&redo);
    if(redo=='Y')
    {
        Z=1;
        system("cls");
    }
    else
    {
        Z=0;
    }


    }
    return 0;
}

