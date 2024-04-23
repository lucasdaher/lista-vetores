#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
  char produtos[10][20] = {"Maca", "Banana", "Batata", "Uva", "Pera", "Refrigerante", "Suco de Morango", "Carne", "Frango", "Alface"};
  int quantidadeVendida[10], opcao;
  float valorUnitario[10], valorTotal[10];
  float salario = 545.0, somaValorTotal;

  do
  {
    printf("Escolha uma opcao: \n\n");
    printf("1) Adicionar valor unitaria e quantidade de venda aos produtos.\n");
    printf("2) Sair do programa\n\n>> ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      system("cls");
      printf("Lista de produtos em ordem: \n");
      for (int i = 0; i < 10; i++)
      {
        printf("%d) %s\n", i + 1, produtos[i]);
      }
      printf("\n---------------------------\n");
      printf("Agora digite o valor para cada produto seguindo a lista: \n\n");

      for (int i = 0; i < 10; i++)
      {
        printf("Digite o valor para %s: \n", produtos[i]);
        scanf("%f", &valorUnitario[i]);
      }

      printf("\n---------------------------\n\n");
      printf("Agora digite o valor da quantidade de itens vendidos de cada produto: \n\n");
      for (int i = 0; i < 10; i++)
      {
        printf("Digite a quantidade de venda para %s: \n", produtos[i]);
        scanf("%d", &quantidadeVendida[i]);
        // printf("Adicionando a quantidade de venda para %s (%dx)\n\n", produtos[i], quantidadeVendida[i]);
      }

      system("cls");
      printf("Mostrando o valor unitario e quantidade de vendas de cada produto: \n\n");
      for (int i = 0; i < 10; i++)
      {
        valorTotal[i] = (valorUnitario[i]) * ((float)quantidadeVendida[i]);
        printf("%d) %s | Valor Unitario (R$%.2f) | Quantidade Vendida (%d) | Valor Total (R$%.2f) \n", i, produtos[i], valorUnitario[i], quantidadeVendida[i], valorTotal[i]);
      }
      printf("\n");

      for (int i = 0; i < 10; i++)
      {
        somaValorTotal += valorTotal[i];
      }

      printf("O valor total em vendas feitas pelo funcionario foi de R$%.2f\n\n", somaValorTotal);
      printf("O funcionario vai receber R$%.2f\n\n", salario + (somaValorTotal * 0.05));
      break;

    case 2:
      printf("Saindo do programa...\n");
      exit(1000);
      break;

    default:
      printf("Comando invalido, tente novamente.");
      break;
    }
  } while (opcao < 3);

  getch();
  return 0;
}