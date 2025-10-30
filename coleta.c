#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 50

typedef struct 
{
    char nome[100];
    long matricula;
    float IRA;
    char curso[51];
    char materia[41];
    double nota;


}alunos;


alunos aluno[MAX_ALUNOS];


int main(int argc, const char *argv[])
{
    // argv[1] deve conter o nome do arquivo que será editado
    FILE *dados = fopen(argv[1], "a");
    int qntd;

    if (dados == NULL)
    {
        printf("Error: No .csv file idetified when calling program. Make sure the .csv file exists. Command Format: './coleta <FileName>.csv;' Closing program\n");
        return 1;
    }
    fprintf(dados, "Nome, Matrícula, IRA, Curso, Matéria, Nota\n");
    
    printf("Quantos alunos serão anotados na planilha ?\n");
    do
    {
        scanf("%i\n", &qntd);
    } while (qntd < 1 || qntd > MAX_ALUNOS);
    
    for (int i = 0; i < qntd; i++)
    {
        fflush(stdin);
        scanf(" %[^\n]", aluno[i].nome);
        scanf("%lu", &aluno[i].matricula);
        scanf("%f", &aluno[i].IRA);
        fflush(stdin);
        scanf(" %[^\n]", aluno[i].curso);
        scanf(" %[^\n]", aluno[i].materia);
        fflush(stdin);
        scanf(" %lf", &aluno[i].nota);
        printf("\n");
        fprintf(dados, "%s, %lu, %.1f, %s, %s, %.1lf\n", aluno[i].nome, aluno[i].matricula, aluno[i].IRA, aluno[i].curso, aluno[i].materia, aluno[i].nota);
        fflush(stdin);
    }

    fclose(dados);
    return 0;
}
