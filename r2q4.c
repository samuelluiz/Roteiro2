#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Eh_divisivel(float num, float divisor){
    if( fmod(num ,divisor) == 0){
        return 1;
    }else{
        return 0;
    }
}

int Eh_primo(float n){
    float i;
    for (i=0;i<n;i++){
        if(Eh_divisivel(n,i) && (i!=1) && (i!=2)){
           return 0;
        }

     }
     return 1;
   }

int main(){
    float n, n1;
    int n2;
    while(1){
    printf("Digita 1 para Verificar se um numero digitado eh Divisel por outro numero\nDigite 2 para verificar se um numero digitado eh Primo\n");
    scanf("%d", &n2);
    switch (n2){
        case 1:
            printf("Digite um numero n: \n");
            scanf("%f", &n);
            printf("Digite o divisor\n");
            scanf("%f", &n1);
            if(Eh_divisivel(n, n1)){
                printf("%.1f Eh divisivel por %.1f \n", n, n1);
            }else{
                printf("%.1f Nao eh divisivel por %.1f\n", n, n1);
            }
            break;
        case 2:
            printf("Digite um numero n: \n");
            scanf("%f", &n);
            if(Eh_primo(n)){
                printf("O numero %.1f eh primo.\n", n);
            }else{
                printf("O numero %.1f nao eh primo", n);
            }
            break;
    }
}
return 0;
}
