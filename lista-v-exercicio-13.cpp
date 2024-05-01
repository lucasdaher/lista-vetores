#include <stdio.h>
#include <conio.h>

#define LINHA_A 3
#define COLUNA_A 4
#define LINHA_B 4
#define COLUNA_B 2

int main()
{
  int matrizA[LINHA_A][COLUNA_A];
  int matrizB[LINHA_B][COLUNA_B];
  int matrizC[LINHA_A][COLUNA_B];

  printf("Digite os elementos da matriz A:\n");
  for (int i = 0; i < LINHA_A; i++)
  {
    for (int j = 0; j < COLUNA_A; j++)
    {
      scanf("%d", &matrizA[i][j]);
    }
  }

  printf("Digite os elementos da matriz B:\n");
  for (int i = 0; i < LINHA_B; i++)
  {
    for (int j = 0; j < COLUNA_B; j++)
    {
      scanf("%d", &matrizB[i][j]);
    }
  }

  for (int i = 0; i < LINHA_A; i++)
  {
    for (int j = 0; j < COLUNA_B; j++)
    {
      matrizC[i][j] = 0;
      for (int k = 0; k < COLUNA_A; k++)
      {
        matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
      }
    }
  }

  printf("Matriz resultante (C):\n");
  for (int i = 0; i < LINHA_A; i++)
  {
    for (int j = 0; j < COLUNA_B; j++)
    {
      printf("%d ", matrizC[i][j]);
    }
    printf("\n");
  }

  getch();
  return 0;
}
