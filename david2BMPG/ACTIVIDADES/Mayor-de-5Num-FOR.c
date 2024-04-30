#include <stdio.h>
int main() 
{
    int digitos[5];
    int i;
    int mayor;
    printf("Por favor, ingrese 5 dígitos uno por uno:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Ingrese el dígito numero %d: ", i + 1);
        scanf("%d", &digitos[i]);
    }
    mayor = digitos[0];
    for (i = 1; i < 5; i++) 
    {
        if (digitos[i] > mayor) 
        {
            mayor = digitos[i];
        }
    }
    printf("El mayor de los dígitos ingresados es: %d\n", mayor);
    return 0;
}
