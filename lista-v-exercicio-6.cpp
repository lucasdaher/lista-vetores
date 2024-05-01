#include <stdio.h>
#include <conio.h>

#define LIM 30

void lerGabarito(char vGabarito[LIM])
{
  printf("Gabarito da prova: \n");
  for (int i = 0; i < LIM; i++)
  {
    printf("Resposta da questão %d: ", i + 1);
    scanf(" %c", &vGabarito[i]);
  }
}

void lerRespostasAluno(char vGabarito[LIM], char respostaAluno[LIM])
{
  for (int j = 0; j < LIM; j++)
  {
    printf("Digite a resposta da questão %d: ", j + 1);
    scanf(" %c", &respostaAluno[j]);
  }
}

int contarQuestoesCorretas(char vGabarito[LIM], char respostaAluno[LIM])
{
  int questaoCerta = 0;
  for (int j = 0; j < LIM; j++)
  {
    if (respostaAluno[j] == vGabarito[j])
    {
      questaoCerta++;
    }
  }
  return questaoCerta;
}

int main()
{
  int nAlunos;

  printf("Digite o número de alunos: ");
  scanf("%d", &nAlunos);

  char vGabarito[LIM];
  lerGabarito(vGabarito);

  for (int i = 0; i < nAlunos; i++)
  {
    char respostaAluno[LIM];
    printf("Aluno %d:\n", i + 1);
    lerRespostasAluno(vGabarito, respostaAluno);
    int questoesCorretas = contarQuestoesCorretas(vGabarito, respostaAluno);
    printf("Aluno %d acertou %d questões.\n", i + 1, questoesCorretas);
  }

  getch();
  return 0;
}
