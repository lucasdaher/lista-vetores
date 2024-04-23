#include <stdio.h>
#include <locale.h>
#include <conio.h>

void ordemCrescente(int *vetor, int num, int pos)
{
  int i;
  for (i = pos - 1; i >= 0 && vetor[i] > num; i--)
  {
    vetor[i + 1] = vetor[i];
  }
  vetor[i + 1] = num;
}

int main()
{
  int vetor[8], num;

  for (int i = 0; i < 8; i++)
  {
    printf("Digite o %do valor do vetor: \n", i + 1);
    scanf("%d", &num);
    ordemCrescente(vetor, num, i);
  }

  printf("\nO vetor ordenado de forma crescente esta abaixo: \n");
  for (int i = 0; i < 8; i++)
  {
    printf("%d ", vetor[i]);
  }

  getch();
  return 0;
}