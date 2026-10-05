/***************************************************
 * Author: bureaumantic!
 * 
 */
#include <stdio.h>
#include <string.h>

struct snack {
  char name[16];
  float cost;
  int quantity;
};

int main() {
  printf("Welcome to Steven Struct's Snack Bar.\n\nHow much money do you have? ");
  float money;
  scanf("%g", &money);

  struct snack store[3];

  strcpy(store[0].name, "Coco Puffs");
  store[0].cost = 1.5;
  store[0].quantity = 4;

  strcpy(store[1].name, "Manchego cheese");
  store[1].cost = 15.5;
  store[1].quantity = 6;

  strcpy(store[2].name, "Magic beans");
  store[2].cost = 0.5;
  store[2].quantity = 0;

  printf("\n");
  for (int i = 0; i < 3; i++) {
    printf("%d) %s\t\t\tcost: $%g\t\tquantity: %d\n", i, store[i].name, store[i].cost, store[i].quantity);
  }
  printf("\nWhat snack would you like to buy? [0,1,2] ");
  int selection;
  scanf("%d", &selection);

  if (store[selection].quantity <= 0) {
    printf("Sorry, we are out of %s\n", store[selection].name);
  }
  else if (store[selection].cost > money) {
    printf("You can't afford it!\n");
  }
  else {
    printf("You bought %s\nYou have $%g left\n", store[selection].name, money - store[selection].cost);
  }

  return 0;
}
