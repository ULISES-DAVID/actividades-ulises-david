#include <stdio.h>
int main()
{
int lado,lado2, altura;
float operacion;
int figura;

puts("que area de figura desea calcular");
puts("triangulo");
puts("trapecio");
puts("rectangulo");

scanf("%i", &figura);
switch(figura)
{
case 1:printf("ingresa cusndo mideel lado del triangulo");
       scanf("%i", &lado);
       operacion=(lado*lado/2);
       printf("el area de la figura es %f", operacion);
    break;
case 2:printf("ingresa la base mayor del trapecio");
    scanf("%i", &lado );
    printf("ingresa la base menor del trapecio");
    scanf("%i", &lado2);
    printf("ingresa la altura del trapecio ");
    scanf("%i", &altura );
      operacion=(lado+lado2/2*altura);
      printf("el resultado es %f", &operacion);

     break;
case 3:printf("ingresa la base del rectangulo");
      scanf("%i", &lado );
      printf("ingresa la altura del rectangulo");
      scanf("%i", &lado2);
      operacion=(lado*lado2);
      printf("la base del rectangulo es  %f", &operacion);
     break;

}



}




