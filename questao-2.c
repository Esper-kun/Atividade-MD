#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int isPrimeNumber (unsigned long int number, int counter)
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

void GeneratePrimeNumbers(unsigned long int counter)
{
  if(isPrimeNumber(counter, 1)){
    printf("%li\n", counter);
  }
  if (counter == 400000000){
    return;
  }

  GeneratePrimeNumbers(counter + 1);
}

int main(int argc, char *argv[])
{
  /* time_t startTime; */
  /* time_t now; */
  /* float elapsedTime; */
  /* float setTime = 60; */
  /* time(&startTime); */

  /* while (elapsedTime < setTime) { */

  /*   now = time(NULL); */
  /*   elapsedTime = difftime(now, startTime); */
  /* } */
  GeneratePrimeNumbers(1);
  return EXIT_SUCCESS;
}
