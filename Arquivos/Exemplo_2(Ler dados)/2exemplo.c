#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    file = fopen("numero.txt", "r");
    /*if(file == null){
        printf("O arquivo não pode ser aberto");
        system(pause);
        return 0;
    }*/

    //Criando variáveis
    int x, y, z;
    //Ler dados no arquivo
    fscanf(file, "%d %d %d", &x, &y, &z);
    
    //Imprimindo os valores
    printf("%d\n%d\n%d", x, y, z);
    fclose(file);
    return 0;
}