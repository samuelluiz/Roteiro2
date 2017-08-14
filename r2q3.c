#include <stdio.h>
#include <stdlib.h>

void Sequencia(int n){
    int i, j;

    int seq[n+1][n+1];

    for(i = 0; i <= n; i++){
        for(j = 0; j <= n; j++){
            seq[i][j] = 0;
        }
    }

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            seq[i][j] = j;
        }
    }

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", seq[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Digite o numero n: \n");
    scanf("%d", &n);

    Sequencia(n);

return 0;
}
