#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    pessoa lista[TAM];
    int i;

    for(i = 0; i < TAM; i++){
        printf("Insira os dados (%d): \n", i+1);
        puts("Nome: ");
        fgets(lista[i].nome, 50, stdin);
        fflush(stdin);

        puts("Idade: ");
        scanf("%d", &lista[i].idade); 
        fflush(stdin);

        puts("Peso: ");
        scanf("%f", &lista[i].peso); 
        fflush(stdin);
    }
    system("cls");

    puts("Seus dados:\n");
    for(i = 0; i < TAM; i++){
        printf("------------------ Pessoa %d -------------------\n", i+1);
        printf("\tNome: %s", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tNome: %.2f\n", lista[i].peso);
    }
    printf("-----------------------------------------------\n");
    return 0;
}