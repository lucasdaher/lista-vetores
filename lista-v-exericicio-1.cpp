#include <stdio.h>
#include <locale.h>
#include <conio.h>

int primo(int numero)
{
  if (numero <= 1)
    return 0;

  for (int i = 2; i * i <= numero; i++)
  {
    if (numero % i == 0)
      return 0;
  }
  return 1;
}

int main()
{
  setlocale(LC_ALL, "");

  int num[9], primos[9];
  int numPrimos = 0;

  for (int i = 0; i < 9; i++)
  {
    printf("Digite o %do valor: \n", i + 1);
    scanf("%d", &num[i]);

    if (primo(num[i]))
    {
      primos[numPrimos] = num[i];
      numPrimos++;
    }
  }

  if (numPrimos > 0)
  {
    printf("\nNumeros primos e suas respectivas posicoes:\n");
    for (int j = 0; j < numPrimos; j++)
    {
      printf("Primo %d na posicao %d\n", primos[j], j);
    }
  }
  else
  {
    printf("Nenhum numero primo foi encontrado...\n");
  }

  getch();
  return 0;
}