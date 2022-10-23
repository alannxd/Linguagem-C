//Usado para comparação, ou seja saber se é igual, se os textos das strings digitados forem iguais o strcmp retorna um valor 0, se não ele retornar um valor diferente de 0 para à variável
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50    //Definir uma constante

int main(){
    setlocale(LC_ALL, "Portuguese");

    char senha[N] = {"AlanS"};
    char senhaTeste[N];
    int ok;
    
    printf("Digite a senha: \n");
    gets(senhaTeste);

    ok = strcmp(senha, senhaTeste);

    if (ok == 0){
        printf("Senha Correta!");
    }else{
        printf("Senha Incorreta!");
    }
    
    return 0;
}