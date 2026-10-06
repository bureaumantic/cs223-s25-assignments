/*----------------------------------------------
 * Author: bureaumantic!
 * Date: 6OCT2026
 * A program that randomly places a Wampus W in an nxm grid. Each non-Wampus cell is labelled with its distance from Wampus
 ---------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int n, m;
  printf("Number of rows: ");
  scanf("%d", &n);
  printf("Number of columns: ");
  scanf("%d", &m);

  int *arr;
  arr = malloc(sizeof(int) * n * m);
  if (arr == NULL) {
    printf("Malloc error with arr!!\n");
    exit(1);
  }

  int wn = rand() % (n);
  int wm = rand() % (m);

  for (int r = 0; r < n; r++) {
    int diffn = wn - r;
    if (diffn < 0) {
      diffn *= -1;
    }
    for (int c = 0; c < m; c++) {
      if (r == wn && c == wm) {
        arr[r * m + c] = 0;
	printf("W ");
      }
      else {
	int diffm = wm - c;
	if (diffm < 0) {
	  diffm *= -1;
	}
	printf("%d ", diffm + diffn);
      }
    }
    printf("\n");
  }

  free(arr);

  return 0;
}
