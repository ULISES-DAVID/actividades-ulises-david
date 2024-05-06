#include <stdio.h>

int main()
{
  
  
  
  
  int nu,su;
  do{

  printf("ingresa un numero");
  scanf("%i", &nu);
   if (nu==0)
   {
    printf("has ingresado el numero 0");
   }
   else{
       su=su+nu;
   }
  }

  while (nu!=0);

    printf("el resultado de la suma es: %i ", su);
  
  
  return 0;
  
}