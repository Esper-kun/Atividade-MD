#include <stdlib.h>
#include <stdio.h>

int isPrimeNumber(unsigned long long int number){
  if (number == 0 || number == 1) {
    return 0;
  }

  for (unsigned long long int i = 2; i <= number / 2; ++i) {
    if (number % i == 0) {
      return 0;
    }
  }

  return 1;
}

int acharDivisorPrimo(int numero, int divisor){
  if (numero % divisor == 0 && isPrimeNumber(divisor)){
    return divisor;
  }

  return acharDivisorPrimo(numero, divisor + 1);
}

