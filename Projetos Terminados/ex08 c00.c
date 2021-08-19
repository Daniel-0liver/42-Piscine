#include <stdio.h>

void combinationUtil(int arr[], int data[], int start, int end, int index, int r)
{
  int i, j;

  if (index == r)
  {
    for (j=0; j<r; j++)
      printf("%d ", data[j]);
    printf("\n");
    return;
  }
 
  for (i=start; i<=end && end-i+1 >= r-index; i++)
  {
    data[index] = arr[i];
    combinationUtil(arr, data, i+1, end, index+1, r);
  }
}

void printCombination(int arr[], int n, int r)
{
  int data[r];
 
  combinationUtil(arr, data, 0, n-1, 0, r);
}
 
int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int r = 5;
  int n = sizeof(arr)/sizeof(arr[0]);
  printCombination(arr, n, r);
}