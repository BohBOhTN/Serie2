#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb,u,d,c,total;
    do{
        printf("Donner un entier positif de troix chiffre au maximum \n");
        scanf("%d",&nb);
    }while(!(nb>0 && nb<1000));
    if(nb>=1 && nb<10){
        total = nb * nb * nb ;
        if(nb == total){
            printf("le nombre %d est cubique \n",nb);
        }else
            printf("le nombre %d n'est pas cubique \n",nb);
    }else
        if(nb>=10 && nb < 100){
            u = nb % 10 ;
            d = nb / 10 ;
            total = (u * u * u) + ( d * d * d) ;
            if (nb == total){
                printf("le nombre %d est cubique \n",nb);
            }else
                printf("le nombre %d n'est pas cubique \n",nb);

        }else
            u = nb % 10 ;
            d = (nb/10) % 10 ;
            c = nb / 100 ;
            total = (u * u * u) + ( d * d * d) + ( c * c * c) ;
            if(nb == total){
                printf("le nombre %d est cubique \n",nb);
            }else
                printf("le nombre %d n'est pas cubique \n",nb);
    return 0;
}
