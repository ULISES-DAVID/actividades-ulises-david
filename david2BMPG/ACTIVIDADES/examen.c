/*escribir un programa en c que solicite 10 numeros enteros psotivos, debera mostrar la suma , el mayor y el menos, con dos escructuras de funcion repetiticvas*/

#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    int suma = 0;
    int mayor, menor;

    
    printf("Ingrese 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    mayor = numeros[0];
    menor = numeros[0];

    
    suma += numeros[0];
    for (i = 1; i < 10; i++) {
        suma += numeros[i];

        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("El número mayor es: %d\n", mayor);
    printf("El número menor es: %d\n", menor);

    printf("La suma de los números es: %d\n", suma);

    return 0;
}