#include <stdio.h>

int main(){
    //Criando um ponteiro que aponta Arquivos, aponta em tipos de dados "FILE"
    FILE *file;
    
    /*"r" para ler
    "w" para escrever
    "a" para alterar
    */
    //Função que abre o arquivo
    file = fopen("teste.txt", "w");

    //Escrever no arquivo
    fprintf(file, "Olá mundo");

    //Fechar arquivo
    fclose(file);


    return 0;
}