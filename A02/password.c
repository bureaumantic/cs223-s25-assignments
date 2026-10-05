/***************************************************
 * Author: bureuamantic!
 * 
 */
#include <stdio.h>

int main() {
  printf("Enter a word: ");
  char entry[12];
  scanf("%s", entry);
  printf("Your bad password is ");
  for (int i = 0; i < 12; i++) {
    if (entry[i] == '\0') {
      break;
    }
    if (entry[i] == 'e') {
      printf("3");
    }
    else if (entry[i] == 'l') {
      printf("1");
    }
    else if (entry[i] == 'a') {
      printf("@");
    }
    else {
      printf("%c", entry[i]);
    }
  }
  printf("\n");
  return 0;
}
