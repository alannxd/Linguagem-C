/* Testando a função fwrite - Grava um arquivo binário contendo 
2 vetores de 15 elementos cada um: O primeiro vetor armazena
caracteres e o segundo armazena dados inteiros */
#include <stdio.h>
#include <stdlib.h>
int main(){
    char ch [15] = "Teste geral";
    int valor [15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    //ponteiro do arquivo
    FILE *ptarq;

    //abertura de arquivo
    ptarq = fopen ("binario.bin", "wb"); //Se não abriu, cria.
    
    //Teste lógico só para saber se o arquivo foi criado
    if(ptarq != NULL){
        printf("Arquivo criado com sucesso!\n");
    }else{
        printf("Erro ao criar o Arquivo");
        exit(1);
    }

    //Gravando os dados no arquivo usando a função fwrite
    //Sintaxe: fwrite(&variavel, numero_de_bytes, num_registros, arquivo)
    fwrite (ch, sizeof (char), 15, ptarq);
    fwrite (valor, sizeof(int), 15, ptarq);

    //Fechando o arquivo
    fclose (ptarq);

    return 0;
}
