#include <stdio.h>
int main ()
{
  char usuario[50];
  int intento;
  int n=1;

  printf("ingresa el nombre de usuario");
  fgets(usuario, sizeof(usuario), stdin);

  do
  {
    printf("ingresa el pin para ingresar");
    scanf("%i", &intento);
    if(intento==1234)
    {
        printf("bienvenido al sistema");
    }
    else {
        printf("acceso denegado");
        printf("llevas %i", n);
    }
    n=n+1;


  } while (n>4 && !1234);
 

}