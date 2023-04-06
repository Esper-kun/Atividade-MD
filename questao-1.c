#include <stdlib.h>
#include <stdio.h>

int isPrimeNumber (int number, int counter)
{
  if (number == 0 || number == 1){
    return 0;
  }
  else if (number % counter == 0 && counter != 1) {
    return 0;
  }
  else if (counter == (number / 2)){
    return 1;
  }
  return isPrimeNumber(number, counter + 1);
}

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
