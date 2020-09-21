#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Entrez la valeur de a : ");
    scanf("%d",&a);
    printf("Entrez la valeur de b : ");
    scanf("%d",&b);
    printf("Entrez la valeur de c : ");
    scanf("%d",&c);
    if((a>b)&&(a>c)&&(b>c))
    {
        printf("%d  %d  %d",c,b,a);
    }
    if((a>b)&&(a>c)&&(c>b))
    {
        printf("%d  %d  %d",b,c,a);
    }
    if((b>a)&&(b>c)&&(a>c))
    {
        printf("%d  %d  %d",c,a,b);
    }
    if((b>a)&&(b>c)&&(c>a))
    {
        printf("%d  %d  %d",a,c,b);
    }
    if((c>a)&&(c>b)&&(a>b))
    {
        printf("%d  %d  %d",b,a,c);
    }
    if((c>a)&&(c>b)&&(b>a))
    {
        printf("%d  %d  %d",a,b,c);
    }
    return 0;
}
