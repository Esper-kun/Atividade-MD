#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

int main(int argc, char *argv[])
{
  int num;
  printf("Digite um numero:");
  scanf("%i", &num);
  if (isPrimeNumber(num, 1) ==  1){
    printf("O numero %i eh primo", num);
  } else {
    printf("O numero %i nao eh primo", num);
  }

  return EXIT_SUCCESS;
}
