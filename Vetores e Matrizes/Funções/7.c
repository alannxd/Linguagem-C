/*Crie um programa onde usuário digita dois valores e imprima a soma, subtração multiplicação e divisão do primeiro valor pelo segundo, sendo que deverá ser criada uma função para cada operação*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    //Declarando nossas funções
    float somar(float n1, float n2);
    float subtrair(float n1, float n2);
    float multiplicar(float n1, float n2);
    float dividir(float n1, float n2);

    //Declarando nossas variáveis
    float nu1 = 0, nu2 = 0; // Variáveis que irão receber os valores
    float adicao = 0, subtra = 0, multi=0, divi = 0;// Essas variáveis irão apenas receber o retorno das funções

    //Entrada de dados/ recebendo os valores para n1 e n2
    printf("Digite dois valores: \n");
    scanf("%f %f", &nu1, &nu2);

    //Processamento/ Iremos receber o retorno das nossas funções nas variáveis agora
    adicao = somar(nu1, nu2);
    subtra = subtrair(nu1, nu2);
    multi = multiplicar(nu1, nu2);
    divi = dividir(nu1, nu2);

    //Saída de dados
    printf("A soma e: %.0f\n", adicao);
    printf("A subtração e: %.0f\n", subtra);
    printf("A multiplicação e: %.0f\n", multi);
    printf("A divisão e: %.1f", divi);

    return 0;
}

//Criando nossa função de soma
float somar(float n1, float n2){
    return n1+n2;//nossa função irá apenas retornar a soma de n1 e n2
}
//Criando nossa função de subtração
float subtrair(float n1, float n2){
    return n1-n2;//nossa função irá apenas retornar a subtração de n1 e n2
}
//Criando nossa função de multiplicação
float multiplicar(float n1, float n2){
    return n1*n2;//nossa função irá apenas retornar a multiplicação de n1 e n2
}
//Criando nossa função de divisão
float dividir(float n1, float n2){
    return n1/n2;//nossa função irá apenas retornar a divisão de n1 e n2
}