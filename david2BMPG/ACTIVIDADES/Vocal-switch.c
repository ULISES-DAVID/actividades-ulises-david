#include <stdio.h>
int main(){
char caracter;
printf("Escriba una letra del abecedario  ");
scanf("%c", &caracter);
switch(caracter)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("el caraceter es una vocal");
        break;
        default:
        printf("el  caracter no es una vocal");
        break;
    }
    return 0;
}