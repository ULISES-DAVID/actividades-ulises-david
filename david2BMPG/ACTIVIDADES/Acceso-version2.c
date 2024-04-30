#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("ingrese los tres numeros de un digito\n");
    scanf("%i",&n1);
    scanf("%i",&n2);
    scanf("%i",&n3);
    if (n1==1 || n2==1 || n3==1)
    {
        if (n1==2 || n2==2 || n3==2)
        {
            if (n1==3 || n2==3 || n3==3)
            {
                printf("Acceso permitido");
            }
            else
            {
                printf("Acceso denegado");
            }
        }
        else
        {
            printf("Acceso denegado");
        }
    }
    else
    {
        printf("Acceso denegado");
    }
    return 0;
}
