/*Criar uma função que verifique quantas vezes um número é divisível pelo outro.*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    //Declarando nossas funções
    int verificar(int n1, int n2);

    //Declarando nossas variáveis;
    int nu1, nu2, vezes;

    //Entrada de dados
    printf("Digite dois números:\n");
    scanf("%d %d", &nu1, &nu2); 

    //Chamando nossa função
    vezes = verificar(nu1, nu2);
    
    //Saída de dados
    printf("É divisível %d vezes", vezes);
    
        
    return 0;
}
int verificar(int n1, int n2){
    int cont=0, resto; 
    resto = n1 % n2;
    if (resto == 0){
        cont+=1;
    }    
    return cont;
}