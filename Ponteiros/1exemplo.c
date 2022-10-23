#include <stdio.h>

int main(){
    int x = 10;
    //Como declarar ponteiro
    int *ponteiro;
    //Apontando o endereço de memória de x
    ponteiro = &x;

    int y = 20;
    //Alterando o valor do meu ponteiro;
    *ponteiro = y;

    printf("%d %d\n", x, y);
    return 0;
}