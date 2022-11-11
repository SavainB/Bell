#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fonc_ite(int taille)
{
  int tab[taille][taille];

  int i, j;
  for (i = 1; i < taille; i++)
  {
    for (j = 0; j < taille; j++)
    {
      tab[i][j] = 0;
    }
  }
  tab[0][0] = 1; // initialiser la premiere valeur du triangle a 1
  tab[1][0] = 1;
  tab[1][1] = 2;
  for (i = 1; i < taille; i++)
  {
    for (j = 1; j < taille; j++)
    {
      if (j < i)
      {
        tab[i][j] = tab[i][j - 1] + tab[i - 1][j - 1];
      }
      if (j == i)
      {
        tab[i][j] = tab[i][j - 1] + tab[i - 1][j - 1];
        tab[i + 1][0] = tab[i][j];
      }
    }
  }

  printf("[ ]");
  for (int i = 0; i < taille; i++)
  {
    printf("[%d]", i);
  }
  printf("\n");

  for (i = 0; i < taille; i++)
  {
    printf("[%d]", i);
    for (j = 0; j < taille; j++)
    {
      if (tab[i][j] != 0)
      {
        printf("[%d]", tab[i][j]);
      }
    }
    printf("\n");
  }
}

int main()
{
  fonc_ite(7);
}