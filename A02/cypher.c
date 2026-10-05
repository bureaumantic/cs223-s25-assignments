/***************************************************
 * Author: bureaumantic!
 * 
 */
#include <stdio.h>

int main() {
  printf("Enter a word: ");
  char word[32];
  scanf("%s", word);
  printf("Enter a shift: ");
  int shift;
  scanf("%d", &shift);
  printf("Your cypher is ");
  for (int i = 0; i < 32; i++) {
    if (word[i] == '\0') {
      break;
    }
    int shifted = word[i] + shift;
    if (shifted > 122) {
      shifted = 96 + (shifted - 122);
    }
    else if (shifted < 97) {
      shifted = 123 - (97 - shifted);
    }
    printf("%c", shifted);
  }
  printf("\n");
  return 0;
}
