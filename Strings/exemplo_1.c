#include <stdio.h>

int main(){
    char s[10];

    printf("Digite algo (scanf normal): ");
    scanf("%s", s);
    fflush(stdin);

    printf("Resultado: %s\n \n", s);

    printf("Digite algo (scanf convencional): ");
    scanf("%9[^\n]s", s);

    printf("Resultado: %s\n \n", s);
    return 0;
}