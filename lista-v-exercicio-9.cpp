#include <stdio.h>
#include <locale.h>
#include <conio.h>

void ordemCrescente(int *vetor, int tamanho)
{
  int i, j, temp;
  for (i = 0; i < tamanho; i++)
  {
    for (j = i + 1; j < tamanho; j++)
    {
      if (vetor[i] > vetor[j])
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
  int primeiroVetor[5], segundoVetor[5], terceiroVetor[10];

  for (int i = 0; i < 5; i++)
  {
    printf("Digite o %do numero do primeiro vetor: \n", i + 1);
    scanf("%d", &primeiroVetor[i]);
  }

  printf("\nPrimeiro vetor preenchido!\n\n");

  for (int i = 0; i < 5; i++)
  {
    printf("Digite o %do numero do segundo vetor: \n", i + 1);
    scanf("%d", &segundoVetor[i]);
  }

  printf("\nSegundo vetor preenchido!\n\n");

  ordemCrescente(primeiroVetor, 5);
  ordemCrescente(segundoVetor, 5);

  for (int i = 0; i < 5; i++)
  {
    terceiroVetor[i] = primeiroVetor[i];
    terceiroVetor[i + 5] = segundoVetor[i];
  }

  ordemCrescente(terceiroVetor, 10);

  printf("\nO vetor resultante da juncao e ordenacao esta abaixo:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", terceiroVetor[i]);
  }

  getch();
  return 0;
}