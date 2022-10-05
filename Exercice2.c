#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Donner le premiere valeur \n");
    scanf("%d",&num1);
    printf("Donner le deuxieme valeur \n");
    scanf("%d",&num2);
    printf("Donner le troisieme  valeur \n");
    scanf("%d",&num3);
    if(num1<num2 && num1<num3){
        printf("Le valeur [%d] est le plus petit entre les autres valeurs",num1);
    }else{
        if(num2<num1 && num2<num3){
            printf("Le valeur [%d] est le plus petit entre les autres valeurs",num2);
        }else{
            printf("Le valeur [%d] est le plus petit entre les autres valeurs",num3);
        }
    }
    return 0;
}
