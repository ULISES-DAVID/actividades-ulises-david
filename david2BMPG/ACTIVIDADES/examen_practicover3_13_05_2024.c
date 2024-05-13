
#include <stdio.h>

int main() {
    char password[] = {'2', 'b', 'm', '3', '0', '\0'};
    char input_password[20];
    char name[50];
    char grupo[10];
    int remaining_attempts = 3;
    int precio;


    printf("Hola, ¿cómo te llamas? ");
    scanf("%s", name);
    printf("ingresa tu salon ");
    scanf("%s",grupo);

    int i = 0;
    while (i < 3) {
        printf("Ingresa tu contraseña (te quedan %d intentos): ", 3 - i);
        scanf("%s", input_password);

        int j = 0;
        int match = 1;
        while (password[j] != '\0' && input_password[j] != '\0') {
            if (password[j] != input_password[j]) {
                match = 0;
                break;
            }
            j++;
        }

        if (match && password[j] == '\0' && input_password[j] == '\0') {
            printf("¡Contraseña correcta, %s! ¿Cuántas facturas tienes? ", name);
            int num_facturas;
            scanf("%d", &num_facturas);
         
            
            
          
            printf("ingrese el precio de de la factura ");
            scanf ("%i", &precio);
              
            
            if(num_facturas>0){
                printf("el numero ingresado es positivo");
                
            }else {
                printf("el numero no es positivo ");
            }
            
            
            
            printf("Bienvenido %s\n");
            break;
        } else {
            printf("Contraseña incorrecta. Prueba de nuevo.\n");
            i++;
        }
    }

    if (i == 3) {
        printf("Demasiados intentos. Intenta más tarde.\n");
    }

    return 0;
}