#include <stdio.h>

int main ()
{
    int determinar;
    printf("ingresa el limite de terminos que desea ");
    scanf("%i: ", &determinar);
    for(int i=0; i<= determinar; i+=5)
    
    {
          printf("%d \n", i);
    }
  return 0;
}