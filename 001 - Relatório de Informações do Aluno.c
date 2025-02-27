#include <stdio.h>

int main()
{
    // Criar Variaveis
    char nome[] = "Gabriel Jung";
    int idade = 22;
    float nota = 9.75;
    int matricula = 210106;

    // Cabeçalho
    printf("Relatorio do Aluno \n");
    printf("------------------- \n");

    // Dados do Aluno
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Nota: %.2f\n", nota);
    printf("Matricula: %d\n", matricula);

    // Rodapé
    printf("Relatorio finalizado \n");
    printf("------------------- \n");
    return 0;
}