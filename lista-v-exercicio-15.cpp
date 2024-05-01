#include <stdio.h>
#include <conio.h>

#define TAMANHO 10

void preencherMatriz(int matriz[TAMANHO][TAMANHO])
{
  for (int i = 0; i < TAMANHO; i++)
  {
    for (int j = 0; j < TAMANHO; j++)
    {
      printf("Digite o elemento da posição [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void realizarTrocas(int matriz[TAMANHO][TAMANHO])
{
  for (int j = 0; j < TAMANHO; j++)
  {
    int temp = matriz[1][j];
    matriz[1][j] = matriz[7][j];
    matriz[7][j] = temp;
  }

  for (int i = 0; i < TAMANHO; i++)
  {
    int temp = matriz[i][3];
    matriz[i][3] = matriz[i][9];
    matriz[i][9] = temp;
  }

  for (int i = 0; i < TAMANHO; i++)
  {
    int temp = matriz[i][i];
    matriz[i][i] = matriz[i][TAMANHO - 1 - i];
    matriz[i][TAMANHO - 1 - i] = temp;
  }

  for (int j = 0; j < TAMANHO; j++)
  {
    int temp = matriz[4][j];
    matriz[4][j] = matriz[j][9];
    matriz[j][9] = temp;
  }
}

void exibirMatriz(int matriz[TAMANHO][TAMANHO])
{
  printf("Matriz resultante:\n");
  for (int i = 0; i < TAMANHO; i++)
  {
    for (int j = 0; j < TAMANHO; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int matriz[TAMANHO][TAMANHO];

  preencherMatriz(matriz);
  realizarTrocas(matriz);
  exibirMatriz(matriz);

  getch();
  return 0;
}
