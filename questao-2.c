#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
  for(unsigned long long int i = 2; i < 400000000; i++){
    if(isPrimeNumber(i)){
      printf("%lli\n", i);
    }
  }
  return EXIT_SUCCESS;
}
