#include <stdio.h>
int main ()
{
    int N1,N2,N3,N4,N5;
    printf("Introduzca 5 numeros:\n");
    scanf("%d", &N1);
    scanf("%d", &N2);
    scanf("%d", &N3);
    scanf("%d", &N4);
    scanf("%d", &N5);
    if (N1>N2 && N1>N3 && N1>N4 && N1>N5)
    {
        printf("%d es el numero mayor", N1);
    }
    if (N2>N1 && N2>N3 && N2>N4 && N2>N5)
    {
        printf("%d es el numero mayor", N2);
    }
    if (N3>N1 && N3>N2 && N3>N4 && N3>N5)
    {
        printf("%d es el numero mayor", N3);
    }
        if (N4>N1 && N4>N3 && N4>N2 && N4>N5)
    {
        printf("%d es el numero mayor", N4);
    }
    if (N5>N1 && N5>N3 && N5>N4 && N5>N2)
    {
        printf("%d es el numero mayor", N5);
    }
    return 0;
}
/* 
'&&' es 'y', o sea que se tienen que cumlpir todas las condiciones para que devuelva un verdadero, con una candicion que no se cumpla suelta un falso
*/