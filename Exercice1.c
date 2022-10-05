#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float val1,val2;
    char choix;
    const float pi = 3.14;
    int choix_methode;
    printf("\t \t Bonjour\n");
    printf("********************************** \n");
    printf("Choisr le type de la figure\n");
    printf("Pour le disque taper D ou d \n");
    printf("Pour le carre taper C ou c \n");
    printf("Pour le rectangle taper R ou r\n");
    printf("**********************************\n");

    printf("Entrer votre choix \n");
    scanf("%c",&choix);
    printf("Choisir la methode de travail \n");
    printf("Si vous voulez utiliser la methode de Structures conditionnelles imbriquées taper 1 \n");
    printf("Si vous voulez utiliser la methode de Structures conditionnelles a choix multiples tapez 2 \n");
    scanf("%d",&choix_methode);
    switch(choix_methode){
    case 1 :
        if(choix =='d' || choix == 'D' ){
        printf("Vous avez choisir disque \n");
        printf("Pour calculer la surface d'un disque \n");
        printf("Donner le rayon \n");
        scanf("%f",&val1);
        printf("La surface de disque est : %.2f\n",(val1*val1)*pi);
        }else{
            if(choix == 'c' || choix == 'C'){
            printf("Vous avez choisir Carre \n");
            printf("Pour calculer la surface d'un carre \n");
            printf("Donner la cote \n");
            scanf("%f",&val1);
            printf("La surface de carre est : %.2f\n",val1*val1);
        }else{
            if(choix=='r' || choix == 'R'){
                printf("Pour calculer la surface d'un rectangle \n");
                printf("Donner la longeur \n");
                scanf("%f",&val1);
                printf("Donner la largeur \n");
                scanf("%f",&val2);
                printf("La surface de rectangle est : %.2f",val1*val2);
            }else{
                printf("Choix invalide");
            }
        }
    }
        break;
    case 2 :
        switch(choix){
        case 'd':
            printf("Vous avez choisir disque \n");
            printf("Pour calculer la surface d'un disque \n");
            printf("Donner le rayon \n");
            scanf("%f",&val1);
            printf("La surface de disque est : %.2f\n",(val1*val1)*pi);
            break;

        case 'D':
            printf("Vous avez choisir disque \n");
            printf("Pour calculer la surface d'un disque \n");
            printf("Donner le rayon \n");
            scanf("%f",&val1);
            printf("La surface de disque est : %.2f\n",(val1*val1)*pi);
            break;
        case 'c':
            printf("Vous avez choisir Carre \n");
            printf("Pour calculer la surface d'un carre \n");
            printf("Donner la cote \n");
            scanf("%f",&val1);
            printf("La surface de carre est : %.2f\n",val1*val1);
            break;
        case 'C':
            printf("Vous avez choisir Carre \n");
            printf("Pour calculer la surface d'un carre \n");
            printf("Donner la cote \n");
            scanf("%f",&val1);
            printf("La surface de carre est : %.2f\n",val1*val1);
            break;
        case 'r':
            printf("Vous avez choisir Rectangle \n");
            printf("Pour calculer la surface d'un rectangle \n");
            printf("Donner la longeur \n");
            scanf("%f",&val1);
            printf("Donner la largeur \n");
            scanf("%f",&val2);
            printf("La surface de rectangle est : %.2f",val1*val2);
            break;

        case 'R':
            printf("Vous avez choisir Rectangle \n");
            printf("Pour calculer la surface d'un rectangle \n");
            printf("Donner la longeur \n");
            scanf("%f",&val1);
            printf("Donner la largeur \n");
            scanf("%f",&val2);
            printf("La surface de rectangle est : %.2f\n",val1*val2);
            break;
        default:
            printf("Choix invalide");
            break;
        }
    }
    return 0;
}
