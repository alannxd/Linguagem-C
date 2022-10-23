//Mostra o tamanho da string
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50    //Definir uma constante

int main(){
    setlocale(LC_ALL, "Portuguese");
    char s[N];
    int i;

    printf("Digite um texto:\n");
    gets(s);
    i = strlen(s);
    printf("O tamanho do texto é: %d", i);

    return 0;
}