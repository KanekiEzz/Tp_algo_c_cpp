#include <stdio.h>

void bubbleSort(int *str, int n)
{
  int i, j;

  i = 0;
  while (i < n - 1)
  {
    j = 0;
    while (j < n - i - 1)
    {
      if (str[j] > str[j + 1])
      {
        int swap;

        swap = str[j];
        str[j] = str[j + 1];
        str[j + 1] = swap;
      }
      j++;
    }
    i++;
  }
}

void ft_print_Array(int *str, int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", str[i]);
  printf("\n");
}

int ft_strlen(int *str)
{
  int i = 0;
  while (*(str + i) != '\0')
    i++;
  return i;
}

int main()
{
  int str[] = {64, 34, 25, 12, 22, 11, 90};
  int n = ft_strlen(str);

  printf("Tableau avant tri : \n");
  ft_print_Array(str, n);

  bubbleSort(str, n);

  printf("Tableau après tri : \n");
  ft_print_Array(str, n);

  return 0;
}

/*
➜  c_algo gcc -Wall -Werror -Wextra TriABulles.c -o Kaneki
➜  c_algo ./Kaneki
Tableau avant tri :
64 34 25 12 22 11 90
Tableau après tri :
11 12 22 25 34 64 90
*/
