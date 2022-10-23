/* Dada uma matriz de 6 linhas e 2 colunas de inteiros, calcular e exibir a média geométrica dos valores de cada uma das linhas. A média geométrica é calculada pela seguinte expressão: sqrt(x1*x2), representa a raiz quadrada do resultado da multiplicação dos elementos da coluna 1 (x1) pelos elementos da coluna 2 (x2) */
#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Biblioteca usada para que o sqrt(calculo) funcione

int main(){
    //Declarando nossa matriz de 6 linhas e duas colunas
    int matriz[6][2];
    float calculo=0; //Essa variável que será responsável pela multiplicação de x1 com x2;
    float raiz=0;
    //Percorrendo nossa matriz para coletar os valores para cada posição
    for(int l = 0; l<6; ++l){
        for(int c = 0; c<2; ++c){
            printf("Matriz [%d][%d] = ", l, c);
            scanf("%d", &matriz[l][c]);
        }
        printf("\n");
    }    
    //Processamento

    for(int l = 0; l<6; ++l){
        //Dando valor de 1 para o calculo
        calculo = 1;
        for(int c = 0; c<2; ++c){
            //Estou dizendo que 1 * matriz que 1*2
            calculo = calculo * matriz[l][c];
            //Aqui está fazendo sqrt(x1 * x2) ou seja sqrt(1 *2); Essa variável raiz que mostrará o resultado
            raiz = sqrt(calculo);
        }
        //Aqui é nossa saída de dados estou imprimindo o resultado de cada linha
        printf("Linha [%d] = %.2f\n", l+1, raiz);

        //Estou zerando minha raiz para quando ela realizar o calculo de outra linha, não pegue o resultado da anterior.
        raiz = 0;
    }   
    return 0;
}