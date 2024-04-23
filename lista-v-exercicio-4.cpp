#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
  int vetor[8], vetorPositivos[8], vetorNegativos[8], i, j = 0, k = 0, num;

  for (i = 0; i < 8; i++)
  {
    printf("Digite o %do valor do vetor: \n", i + 1);
    scanf("%d", &num);
    vetor[i] = num;
    if (num >= 0)
    {
      vetorPositivos[j] = num;
      j++;
    }
    else
    {
      vetorNegativos[k] = num;
      k++;
    }
  }

  printf("\nO vetor de numeros positivos esta abaixo: \n");
  for (i = 0; i < j; i++)
  {
    printf("%d ", vetorPositivos[i]);
  }

  printf("\n\nO vetor de numeros negativos esta abaixo: \n");
  for (i = 0; i < k; i++)
  {
    printf("%d ", vetorNegativos[i]);
  }

  getch();
  return 0;
}