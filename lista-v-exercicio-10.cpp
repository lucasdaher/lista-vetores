#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
  int vetor[100], i = 0, num;

  printf("Digite 999 para parar: \n");
  while (1)
  {
    printf("Digite o %do valor do vetor: \n", i + 1);
    scanf("%d", &num);
    if (num == 999)
    {
      break;
    }
    vetor[i] = num;
    i++;
  }

  printf("\nO vetor na ordem inversa esta abaixo:\n");
  for (i = i - 1; i >= 0; i--)
  {
    printf("%d ", vetor[i]);
  }

  getch();
  return 0;
}