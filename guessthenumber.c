#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int userNum = 0;
  int randNum = 0;
  int stepsWon = 0;

  randNum = rand() % 100;
  printf("I'm thinking of a number between 1 - 100\n");

  for (int i = 1; i < 100; i++) {
    stepsWon++;

    scanf("%d", &userNum);

    if (userNum > randNum) {
      printf("Guess lower!\n");
    }
    if (userNum < randNum) {
      printf("Guess higher!\n");
    }
    if (userNum == randNum) {
      printf("Congrats, the number was %d and it only took %d tries\n", randNum,
             stepsWon);
      break;
    }
  }
  return 0;
}
