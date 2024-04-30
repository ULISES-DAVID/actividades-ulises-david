#include <stdio.h>
int main() {
    char letra;
    printf("Ingrese una letra: ");
    scanf("%c", &letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') 
    {
        printf("La letra %c es una vocal.\n", letra);
    } 
    else 
    {
        printf("La letra %c es una consonante.\n", letra);
    }
    return 0;
}

/*
'||' ees como el 'o', es decir que conque una de las condicones de verdader toda la condicion dara verdadero
*/