#include <stdio.h>

void TriSelection(int t[], int N)
{
  int i, j, min, temp;
  for (i = 0; i < N - 1; i++)
  {
    min = i;
    for (j = i + 1; j < N; j++)
    {
      if (t[j] < t[min])
      {
        min = j;
      }
    }
    temp = t[i];
    t[i] = t[min];
    t[min] = temp;
  }
}
void BubbleSort(int arr[], int n)
{
  int i, j, temp;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
int main()
{
  int arr1[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr1) / sizeof(arr1[0]);

  printf("Original array:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  TriSelection(arr1, n);
  printf("Sorted array using TriSelection:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  int arr2[] = {64, 25, 12, 22, 11};

  BubbleSort(arr2, n);
  printf("Sorted array using BubbleSort:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  return 0;
}
/*
➜  c_algo gcc -Wall -Werror -Wextra TriParSélection.c -o Kaneki
➜  c_algo ./Kaneki
Original array:
64 25 12 22 11
Sorted array using TriSelection:
11 12 22 25 64
Sorted array using BubbleSort:
11 12 22 25 64
*/