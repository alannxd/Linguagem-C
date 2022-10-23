#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Criando e inicializando
    pessoa pes = {0, 0.0, "Alan"};

    printf("Início:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //Atribuindo valores aos campos
    pes.idade = 15;
    pes.peso = 56.99;
    strcpy(pes.nome, "Julia");

    printf("Alterando os campos via código:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //Solicitando inserções via teclado

    printf("Insira sua idade:\n");
    scanf("%d", &pes.idade);
    printf("Insira seu peso:\n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Insira seu nome:\n");
    fgets(pes.nome, 50, stdin);

    printf("Alterando com dados do usuário:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
    


    return 0;
}