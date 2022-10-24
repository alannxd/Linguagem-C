#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *file;

    //Abrindo o arquivo
    file = fopen("string.txt", "a");

    //Teste lógico para saber se o arquivo "string.txt existe"
    if(file == NULL){
        printf("Não foi possível abri o arquivo\n");
        getchar();
        exit(1);
    }

    fprintf(file, "\nPrimeira Linha\n");

    //Incluindo um vetor de Caractere
    char frase[] = "Segunda Linha\n";
    fputs(frase, file);

    //Inserindo apenas um caractere
    char caractere = '3';
    fputc(caractere, file);

    //Fechando o Arquivo
    fclose(file);

    return 0;
}