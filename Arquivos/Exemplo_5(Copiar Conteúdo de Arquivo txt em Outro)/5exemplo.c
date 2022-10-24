#include <stdio.h>

int main(){
    //Definindo que a função existe
    void copiarConteudo(FILE *file1, FILE *file2);


    FILE *file1;
    //Abrindo o arquivo
    file1 = fopen("Arquivo1.txt", "r");

    //Teste lógico para saber se o arquivo "string.txt existe"
    if(file1 == NULL){
        printf("Não foi possível abri o arquivo\n");
        return 1;
    }

    FILE *file2;
    //Abrindo o arquivo
    file2 = fopen("Arquivo2.txt", "w");

    copiarConteudo(file1, file2);

    //Fechando o arquivo
    fclose(file1);
    fclose(file2);


    return 0;
}

void copiarConteudo(FILE *file1, FILE *file2){

    //Vetor de char que recebe 1000 caractere
    char leitor[1000];

    while (fgets(leitor, 1000, file1) != NULL){
        fputs(leitor, file2);        
    }
    

}