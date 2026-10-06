/*----------------------------------------------
 * Author: bureaumantic! 
 * Date: 6OCT2026
 * Repeats a string s n times
 ---------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  printf("Enter a word: ");
  char *word;
  word = malloc(33);
  if (word == NULL) {
    printf("Malloc error!!\n");
    exit(1);
  }

  scanf("%s", word);
  printf("Enter a count: ");
  int *count;
  count = malloc(sizeof(int));
  if (count == NULL) {
    printf("Malloc error!!!\n");
    exit(1);
  }
  scanf("%d", count);

  char *result;
  result = malloc(((int) strlen(word)) * *count);

  if (result == NULL) {
    printf("Cannot allocate new string. Exiting...\n");
    exit(1);
  }
  int ind = 0;
  for (int i = 0; i < ((int)strlen(word)) * *count; i++) {
    if (word[ind] == '\0') {
      ind = 0;
    }
    result[i] = word[ind];
    ind++;
  }
  result[-1] = '\0';

  printf("Your word is %s\n", result);

  free(word);
  free(count);
  free(result);
  count = NULL;
  result = NULL;
  word = NULL;
  return 0;
}
