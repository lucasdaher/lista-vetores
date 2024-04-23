#include <stdio.h>
#include <locale.h>
#include <conio.h>

void trocarConteudoVetores(int *primeiroVetor, int *segundoVetor, int tamanho)
{
  int temp;
  for (int i = 0; i < tamanho; i++)
  {
    temp = primeiroVetor[i];
    primeiroVetor[i] = segundoVetor[i];
    segundoVetor[i] = temp;
  }
}

void stringVetor(int *vetor, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", vetor[i]);
  }
  printf("\n");
}

int main()
{
  setlocale(LC_ALL, "");

  int primeiroVetor[5], segundoVetor[5];
  int tamanho = sizeof(primeiroVetor) / sizeof(primeiroVetor[0]);

  for (int i = 0; i < 5; i++)
  {
    printf("Digite o %do valor do primeiro vetor: \n", i + 1);
    scanf("%d", &primeiroVetor[i]);
  }

  for (int j = 0; j < 5; j++)
  {
    printf("Digite o %do valor do segundo vetor: \n", j + 1);
    scanf("%d", &segundoVetor[j]);
  }

  printf("\nO primeiro vetor era: \n");
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", primeiroVetor[i]);
  }
  printf("\n");

  printf("O segundo vetor era: \n");
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", segundoVetor[i]);
  }
  printf("\n\n----------------------------\n");

  trocarConteudoVetores(primeiroVetor, segundoVetor, tamanho);
  printf("O primeiro vetor agora e: \n");
  stringVetor(primeiroVetor, tamanho);
  printf("O segundo vetor agora e: \n");
  stringVetor(segundoVetor, tamanho);

  getch();
  return 0;
}