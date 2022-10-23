#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    file = fopen("string.txt", "r");
    /*if(file == null){
        printf("Não foi possível abri o arquivo\n");
        getchar();
        exit(0);
    }*/

    //Criando uma String
    char frase[100];
    
    //Ler meu arquivo string com quebra de linha
    while (fgets(frase, 100, file) != NULL){
        printf("%s", frase);        
    }

    fclose(file);
    

    return 0;
}