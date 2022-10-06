#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1,val2;
    printf("Donner la premiere valeur \n");
    scanf("%d",&val1);
    printf("Donner la deuxieme valeur \n");
    scanf("%d",&val2);
    if((val1==0)&&(val2>0 || val2 < 0 || val2 == 0)){
        printf("le signe de produit est null");
    }else
        if((val2==0)&&(val1>0 || val1 < 0 || val1 == 0)){
            printf("le signe de produit est null");
        }else
            if((val1 > 0) && (val2 > 0)){
                printf("Le signe de produit est positive");
            }else
                if((val1<0) && (val2 < 0 || val2 > 0)){
                    printf("le signe de produit est negatif");
                }else
                    printf("le signe de produit est negatif");
    return 0;
}
