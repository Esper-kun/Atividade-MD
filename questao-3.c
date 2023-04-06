#include <stdlib.h>
#include <stdio.h>
#include "utils.c"

#define MAX_SIZE 1000

void decomporNumero(int numero, int divisores[], int counter)
{
  int divisor = 2;
  divisor = acharDivisorPrimo(numero, divisor);

  divisores[counter] = divisor;
  printf("%i\n", divisores[counter]);

  if (numero == divisor){
    return;
  }

  decomporNumero(numero / divisor, divisores, ++counter);
}

void runOverArray()
{

}

int main(int argc, char *argv[])
{
  int divisores[MAX_SIZE];
  int numero;

  printf("insira um numero:\n");
  scanf("%i", &numero);

  decomporNumero(numero, divisores, 0);
  printf("%i %i", divisores[0], divisores[1]);
  return EXIT_SUCCESS;
}
