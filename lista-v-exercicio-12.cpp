#include <stdio.h>
#include <conio.h>

#define LINHAS 4
#define COLUNAS 4

int main()
{
  double matriz[LINHAS][COLUNAS];
  double menor = 0.0, maior = 0.0;
  int linhaMenor = 0, colunaMenor = 0;

  printf("Digite os elementos da matriz:\n");
  for (int i = 0; i < LINHAS; i++)
  {
    for (int j = 0; j < COLUNAS; j++)
    {
      scanf("%lf", &matriz[i][j]);
      if (matriz[i][j] < menor)
      {
        menor = matriz[i][j];
        linhaMenor = i;
        colunaMenor = j;
      }
    }
  }

  for (int j = 0; j < COLUNAS; j++)
  {
    if (matriz[linhaMenor][j] > maior)
    {
      maior = matriz[linhaMenor][j];
    }
  }

  printf("Menor elemento: %.2lf (linha %d, coluna %d)\n", menor, linhaMenor + 1, colunaMenor + 1);
  printf("Maior elemento na mesma linha: %.2lf\n", maior);

  getch();
  return 0;
}
