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
        
        
        suma += numeros[i];
        
        
        if (i == 0 || numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (i == 0 || numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    
    printf("El número mayor es: %d\n", mayor);
    printf("El número menor es: %d\n", menor);

    
    printf("La suma de los números es: %d\n", suma);

    return 0;
}