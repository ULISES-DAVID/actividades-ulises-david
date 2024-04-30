#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("ingrese los tres numeros de un digito\n");
    scanf("%i",&n1);
    scanf("%i",&n2);
    scanf("%i",&n3);
    if(n1==1)
    {
        if(n2==2)
        {
            if(n3==3)
            {
                printf("acceso permitido");
            }
        }
    }
    else
    {
        printf("acceso denegado ");
    }
    return 0;
}