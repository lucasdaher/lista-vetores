#include <stdio.h>
#include <conio.h>

#define LINHAS 2
#define COLUNAS 3

int main()
{
  int matriz[LINHAS][COLUNAS];
  int menorLinha[LINHAS];
  int maiorColuna[COLUNAS];
  int pontoDeSela = 0;
  int linhaPontoDeSela = -1, colunaPontoDeSela = -1;

  printf("Digite os elementos da matriz:\n");
  for (int i = 0; i < LINHAS; i++)
  {
    for (int j = 0; j < COLUNAS; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < LINHAS; i++)
  {
    menorLinha[i] = matriz[i][0];
    for (int j = 1; j < COLUNAS; j++)
    {
      if (matriz[i][j] < menorLinha[i])
      {
        menorLinha[i] = matriz[i][j];
      }
    }
  }

  for (int j = 0; j < COLUNAS; j++)
  {
    maiorColuna[j] = matriz[0][j];
    for (int i = 1; i < LINHAS; i++)
    {
      if (matriz[i][j] > maiorColuna[j])
      {
        maiorColuna[j] = matriz[i][j];
      }
    }
  }

  for (int i = 0; i < LINHAS; i++)
  {
    for (int j = 0; j < COLUNAS; j++)
    {
      if (matriz[i][j] == menorLinha[i] && matriz[i][j] == maiorColuna[j])
      {
        pontoDeSela = matriz[i][j];
        linhaPontoDeSela = i;
        colunaPontoDeSela = j;
        break;
      }
    }
  }

  if (pontoDeSela != 0)
  {
    printf("Ponto de sela encontrado: %d (linha %d, coluna %d)\n", pontoDeSela, linhaPontoDeSela + 1, colunaPontoDeSela + 1);
  }
  else
  {
    printf("Não há ponto de sela na matriz.\n");
  }

  getch();
  return 0;
}
