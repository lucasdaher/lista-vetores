#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
  int primeiroVetor[10], segundoVetor[10];

  for (int i = 0; i < 10; i++)
  {
    printf("Digite o %do numero do primeiro vetor: \n", i + 1);
    scanf("%d", &primeiroVetor[i]);
  }

  printf("\nPrimeiro vetor preenchido!\n\n");

  for (int i = 0; i < 10; i++)
  {
    printf("Digite o %do numero do segundo vetor: \n", i + 1);
    scanf("%d", &segundoVetor[i]);
  }

  printf("\nSegundo vetor preenchido!\n\n");

  int resultadoVetor[20];
  for (int i = 0; i < 10; i++)
  {
    resultadoVetor[i * 2] = primeiroVetor[i];
    resultadoVetor[i * 2 + 1] = segundoVetor[i];
  }

  printf("\nO vetor intercalado esta abaixo: \n\n");
  for (int i = 0; i < 20; i++)
  {
    printf("%d ", resultadoVetor[i]);
  }

  getch();
  return 0;
}