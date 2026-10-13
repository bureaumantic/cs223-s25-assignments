/*----------------------------------------------
 * Author: bureaumantic!
 * Date: 13OCT26 (hooyah!)
 * Takes in n and n, the dimensions of a square nxn matrix and determines whether that matrix is a magic square. That is, it checks if each row, column, and diagonal has the same sum, or magic constant.
 ---------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);
  scanf("%d", &n);

  int *arr;
  arr = malloc(sizeof(int) * n * n);
  if (arr == NULL) {
    printf("malloc error!!\n");
	exit(1);
  }

  int magicconst = 0;
  for (int r = 0; r < n; r++) {
    int sumPerRow = 0;
    for (int c = 0; c < n; c++) {
	  int entry;
	  scanf("%d ", &entry);
	  arr[r * n + c] = entry;
	  if (r == 0) {
	    magicconst += arr[r * n + c];
	  }
	  sumPerRow += arr[r* n + c];
	}
	if (sumPerRow != magicconst) {
	  printf("M is NOT a magic square!\n");
	  free(arr);
	  return(0);
	}
  }

  for (int c = 0; c < n; c++) {
    int colSum = 0;
    for (int r = 0; r < n; r++) {
	  colSum += arr[r * n + c];
	}
	if (colSum != magicconst) {
	  printf("M is NOT a magic square!\n");
	  free(arr);
	  return(0);
	}
  }

  int diagSumLeft = 0;
  for (int i = 0; i < n; i++) {
    diagSumLeft += arr[i * n + i];
  }
  if (diagSumLeft != magicconst) {
    printf("M is NOT a magic square!\n");
	free(arr);
	return(0);
  }

  int diagSumRight = 0;
  for (int i = 0; i < n; i++) {
    diagSumRight += arr[(n - i - 1) * n + i];
  }
  if (diagSumRight != magicconst) {
    printf("M is NOT a magic square!\n");
	free(arr);
	return(0);
  }

  printf("M is a magic square (magic constant = %d)\n", magicconst);

  free(arr);
  arr = NULL;

  return 0;
}
