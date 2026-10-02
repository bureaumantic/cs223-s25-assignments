/***************************************************
 * mathgame.c
 * Author: bureaumantic
 * Implements a math game
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  printf("Welcome to Math Game!\nHow many rounds do you want to play? ");
  int numRounds;
  scanf("%d", &numRounds);

  int correct = 0;
  for (int i = 0; i < numRounds; i++) {
    int a = 1 + rand()/((RAND_MAX + 1u)/9);
    int b = 1 + rand()/((RAND_MAX + 1u)/9);
    printf("\n%d + %d = ? ", a, b);
    int sol;
    scanf("%d", &sol);
    if (sol == a + b) {
      printf("Correct!\n");
      correct++;
    }
    else {
      printf("Incorrect :(\n");
    }
  }
  printf("You answered %d/%d correctly.", correct, numRounds);

  return 0;
}
