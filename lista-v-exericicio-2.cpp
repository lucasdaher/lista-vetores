#include <stdio.h>
#include <locale.h>
#include <conio.h>

void trocarConteudoVetores(int primeiroVetor[], int segundoVetor[], int tamanho)
{
  int temp;
  for (int i = 0; i < tamanho; i++)
  {
    temp = primeiroVetor[i];
    primeiroVetor[i] = segundoVetor[i];
    segundoVetor[i] = temp;
    printf("%d");
  }
}

int main()
{
  setlocale(LC_ALL, "");

  int primeiroVetor[5], segundoVetor[5];
  int tamanho = sizeof(primeiroVetor) / sizeof(primeiroVetor[0]);

  for (int i = 0; i < 5; i++)
  {
    printf("Digite o %do valor do primeiro vetor: \n", primeiroVetor[i]);
    scanf("%d", &primeiroVetor[i]);

    for (int j = 0; j < 5; j++)
    {
      printf("Digite o %do valor do segundo vetor: \n", segundoVetor[j]);
      scanf("%d", &segundoVetor[j]);
    }
  }

  getch();
  return 0;
}