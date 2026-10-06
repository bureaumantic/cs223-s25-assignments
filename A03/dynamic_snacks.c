/*----------------------------------------------
 * Author: bureaumantic!
 * Date: 06OCT2026
 * A program that allows users to add to a digital snackbar and see what is in stock.
 ---------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

struct snack {
  char name[32];
  float cost;
  int quantity;
};

int main() {
  printf("Enter a number of snacks: ");
  int numSnacks;
  scanf("%d", &numSnacks);

  struct snack *snackArr;

  snackArr = malloc(sizeof(struct snack) * numSnacks);
  if (snackArr == NULL) {
    printf("Malloc error with snackArr!!\n");
    exit(1);
  }

  for (int i = 0; i < numSnacks; i++) {
    printf("Enter a name: ");
    scanf("%s", snackArr[i].name);
    printf("Enter a cost: ");
    scanf("%g", &snackArr[i].cost);
    printf("Enter a quantity: ");
    scanf("%d", &snackArr[i].quantity);
  }

  printf("\nWelcome to Dynamic Donna's Snack Bar.\n\n");

  for (int i = 0; i < numSnacks; i++) {
    printf("%d) %s\t\tcost: $%g\tquantity: %d\n", i, snackArr[i].name, snackArr[i].cost, snackArr[i].quantity);
  }

  free(snackArr);

  return 0;
}
