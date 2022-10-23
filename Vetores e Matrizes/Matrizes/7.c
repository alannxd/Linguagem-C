#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3] = {0};
    int a = 0;
    int vetor[9];

    printf("Valor para A: ");
    scanf("%d",&a); 

    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
        printf("Elemento[%d][%d]= ",i,j);
        scanf("%d",&matriz[i][j]);
        a = a * matriz[i][j];
    }
    vetor[i] = a;
    a = 0;
    
    }

    

    for(int i = 0; i<9; ++i){
        printf("Vetor [%d] = %d\n", i, vetor[i]);
    }        
    return 0;
}