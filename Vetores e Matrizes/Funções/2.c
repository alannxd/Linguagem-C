/*Criar uma função que produza a saída a seguir, usando uma função:
*********************
SEU NOME - CURSO
**********************/
#include <stdio.h>


int main(){
    
    char imprimir(); //Declarando a nossa função

    //Variáveis que utilizaremos
    char nome[40]; 
    char curso[40];

    //Entrada de dados 
    printf("Digite seu nome:\n");
    fgets(nome, 40, stdin);
    printf("Digite seu curso:\n");
    fgets(curso, 40, stdin);
    
    //Chamando à função, veja que passei o nome e curso como parâmetro
    imprimir(nome, curso);
    

    return 0;
}
//Criando à nossa função do tipo char
/*char n[40] irá receber char nome[40] da nossa função principal
char c[40] irá receber char curso[40] da nossa função principal também.
*/
char imprimir(char n[40], char c[40]){
    //Esse for é só para imprimir 20 "*" no nosso código
    for(int i = 0; i <20; ++i){
        printf("*");
    }
    printf("\n%s-%s", n, c);
    for(int i = 0; i <20; ++i){
        printf("*");
    }
}
/*Vemos que eu não coloquei nenhum retorno(return), ou seja, quando eu chamar a função char imprimir
ela irá fazer tudo que está dentro das "{}".
*/