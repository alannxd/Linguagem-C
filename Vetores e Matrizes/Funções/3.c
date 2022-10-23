/*Criar um programa que entre com três números e para cada um, imprimir o dobro. Usar duas funções uma para o dobro dos valores e a outra para interface da saída no vídeo
********************* 
Digite o número:12
Dobro: 24
*********************
Digite o número:36
Dobro: 72
*********************/

#include <stdio.h>
int main(){

    int n1, n2, n3, dou;//As variáveis que irão receber os valores
    //Declarando nossas funções
    int dobro();
    void imprimir();
    //Entrada de dados
    printf("Digite o numero: ");
    scanf("%d", &n1);
    //A variável dou irá receber o retorno da função int dobro();
    dou = dobro(n1);
    printf("Dobro: %d\n", dou);
    //Essa função imprimir apenas 20 "*"
    imprimir();

    printf("\nDigite o numero: ");
    scanf("%d", &n2);
    dou = dobro(n2);
    printf("Dobro: %d\n", dou);
    imprimir();

    printf("\nDigite o numero: ");
    scanf("%d", &n3);
    dou = dobro(n3);
    printf("Dobro: %d\n", dou);
    imprimir();


    return 0;
}
// Função que faz o dobro do números
int dobro(int n){
    return n*2;
}
//Função que imprimi os "*" 20 vezes
void imprimir(){
    for(int i = 0; i<20; ++i){
        printf("*");
    }
}


//OBS: Eu não usei estruturas de repetição, mas se você quiser usar também pode para deixar o código menor