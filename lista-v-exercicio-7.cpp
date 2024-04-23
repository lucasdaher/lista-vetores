#include <stdio.h>
#include <locale.h>
#include <conio.h>

void ordemDecrescente(int *vetor, int tamanho)
{
  int temp;
  for (int i = 0; i < tamanho; i++)
  {
    for (int j = i + 1; j < tamanho; j++)
    {
      if (vetor[i] < vetor[j])
      {
        temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
      }
    }
  }
}

int main()
{
  int vetor[10];
  for (int i = 0; i < 10; i++)
  {
    printf("Digite o %do valor do vetor: \n", i + 1);
    scanf("%d", &vetor[i]);
  }

  ordemDecrescente(vetor, 10);

  printf("O vetor ordenado de forma decrescente esta abaixo: \n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", vetor[i]);
  }

  getch();
  return 0;
}