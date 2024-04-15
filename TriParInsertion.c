#include <stdio.h>

void ft_Insertion_Sort(int *str, int n)
{
  int i, key, j;
  for (i = 1; i < n; i++)
  {
    key = str[i];
    j = i - 1;

    while (j >= 0 && str[j] > key)
    {
      str[j + 1] = str[j];
      j = j - 1;
    }
    str[j + 1] = key;
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
  int str[] = {12, 11, 13, 5, 6};
  int n = ft_strlen(str);

  printf("Tableau avant tri : \n");
  ft_print_Array(str, n);

  ft_Insertion_Sort(str, n);

  printf("Tableau après tri : \n");
  ft_print_Array(str, n);

  return 0;
}

/*
➜  c_algo gcc -Wall -Werror -Wextra TriParInsertion.c -o Kaneki
➜  c_algo ./Kaneki
Tableau avant tri :
12 11 13 5 6
Tableau après tri :
5 6 11 12 13
*/
