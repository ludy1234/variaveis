#include<stdio.h>

main(){

    char nome[50];
    int idade;
    char matricula[20];
    char endereco[100];
    char curso[50];
    int periodo;
    char disciplina[50];
    float mensalidade;

    printf("Cadastro de informações/n");

    printf("Digite a nome: ");
    scanf("%s", nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a maricula: ");
    scanf("%s", matricula);

    printf("Digite o endereço: ");
    scanf("%s", endereco);

    printf("Digite o curso: ");
    scanf("%s", curso);

    printf("Digite o periodo");
    scanf("%d", &periodo);

    printf("Digite a disciplna");
    scanf("%s, disciplina");

    printf("Digite a mensalidade");
    scanf("%f", &mensalidade);

    printf("/nInformações cadastradas:/n");
    printf("Nome: %s/n", nome);
    printf("Idade: %d/n", idade);
    printf("Matricula: %s/n", matricula);
    printf("Endereco: %s/n", endereco);
    printf("Curso: %s/n", curso);
    printf("Periodo: %d/n", periodo);
    printf("Disciplina: %s/n", disciplina);
    printf("Mensalidade: %d/n", mensalidade);

    return 0;

}