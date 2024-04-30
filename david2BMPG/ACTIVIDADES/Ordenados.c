#include <stdio.h>
int main() 
{
    int num1, num2, num3;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);
    if (num1 >= num2 && num1 >= num3) 
    {
        if (num2 >= num3) 
        {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num1, num2, num3);
        } 
        else 
        {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num1, num3, num2);
        }
    }
    else if (num2 >= num1 && num2 >= num3) 
    {
        if (num1 >= num3) 
        {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num2, num1, num3);
        } 
        else 
        {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num2, num3, num1);
        }
    } 
    else 
    {
        if (num1 >= num2) 
        {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num3, num1, num2);
        } 
        else 
        {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num3, num2, num1);
        }
    }
    return 0;
}

/* 
'&&' es 'y', o sea que se tienen que cumlpir todas las condiciones para que devuelva un verdadero, con una candicion que no se cumpla suelta un falso
*/