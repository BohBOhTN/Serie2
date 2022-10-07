#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,d;
    printf("Bonjour \n");
    printf("Ce program va resoudre une equation de seconde degree \n");
    printf("sous forme de ax2 + bx + c = 0 \n");
    printf("Donner la valeur de a \n");
    scanf("%f",&a);
    printf("Donner la valeur de b \n");
    scanf("%f",&b);
    printf("Donner la valeur de c \n");
    scanf("%f",&c);

    d=(b*b)-4*a*c;
    printf("%.2f \n",d);
    if(d>0){
        printf("Delta est positive\n");
        printf("Donc f a deux racines \n");
        printf("x1 = %.2f \n",(-b-sqrtf(d))/(2*a));
        printf("et x2 = %.2f \n",(-b+sqrtf(d))/(2*a));
    }else{
        if(d==0){
            printf("Delta est nul \n");
            printf("Donc f a une seul racine \n");
            printf("x1 = %.2f",-b/2*a);
        }else{
            printf("Delta est négatif donc f n'a pas de racine \n");
        }
    }
    return 0;
}
