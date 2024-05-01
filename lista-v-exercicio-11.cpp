#include <stdio.h>
#include <conio.h>

#define LINHAS 3
#define COLUNAS 4

void preencherMatriz(int matriz[LINHAS][COLUNAS])
{
  for (int i = 0; i < LINHAS; i++)
  {
    for (int j = 0; j < COLUNAS; j++)
    {
      printf("Digite o elemento da posição [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void calcularSomas(int matriz[LINHAS][COLUNAS], int vetorSomas[LINHAS])
{
  for (int i = 0; i < LINHAS; i++)
  {
    vetorSomas[i] = 0;
    for (int j = 0; j < COLUNAS; j++)
    {
      vetorSomas[i] += matriz[i][j];
    }
  }
}

void multiplicarPorSoma(int matriz[LINHAS][COLUNAS], int vetorSomas[LINHAS])
{
  for (int i = 0; i < LINHAS; i++)
  {
    for (int j = 0; j < COLUNAS; j++)
    {
      matriz[i][j] *= vetorSomas[i];
    }
  }
}

void exibirMatriz(int matriz[LINHAS][COLUNAS])
{
  printf("Matriz resultante:\n");
  for (int i = 0; i < LINHAS; i++)
  {
    for (int j = 0; j < COLUNAS; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int matriz[LINHAS][COLUNAS];
  int vetorSomas[LINHAS];

  preencherMatriz(matriz);
  calcularSomas(matriz, vetorSomas);
  multiplicarPorSoma(matriz, vetorSomas);
  exibirMatriz(matriz);

  getch();
  return 0;
}
