#include <stdlib.h>
#include <stdio.h>
#include "utils.c"

#define MAX_SIZE 1000

void decomporNumero(int numero, int* divisores, int count)
{
  int divisor = 1;
  divisor = acharDivisorPrimo(numero, divisor);
  divisores[count] = divisor;

  if (numero == divisor){
    return;
  }

  return decomporNumero(numero / divisor, divisores, count++);
}

void runOverArray()
{

}

int main(int argc, char *argv[])
{
  int divisores[MAX_SIZE];
  int* pdivisores = divisores;
  int numero;
  printf("insira um numero:\n");
  scanf("%i", &numero);

  decomporNumero(numero, pdivisores, 0);
  printf("%i %i", divisores[0], divisores[1]);
  return EXIT_SUCCESS;
}
