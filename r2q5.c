#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,c,d, nF=0, nM=0;
    float altura[10], maior, menor, mediaF=0, mediaM=0, somaF=0, somaM=0;
    char sexo[10][2];

    for(i=0; i<10; i++){
        printf("Digite a altura da pessoa: \n");
        scanf("%f", &altura[i]);
        printf("Digite o sexo da pessoa (M para masculino e F para feminino): \n");
        scanf("%s", sexo[i]);
    }
    for(i=0;i<10;i++){
        if(sexo[i][0] == 'F'){
            somaF = somaF + altura[i];
            nF = nF + 1;
        }
        if(sexo[i][0] == 'f'){
            somaF = somaF + altura[i];
            nF = nF + 1;
        }
        if(sexo[i][0] == 'M'){
            somaM = somaM + altura[i];
            nM = nM + 1;
        }
        if(sexo[i][0] == 'm'){
            somaM = somaM + altura[i];
            nM = nM + 1;
        }
    }
    mediaF = (somaF)/nF;
    mediaM = (somaM)/nM;
    for(i=0; i<10; i++){
        if(altura[i] > altura[i+1])
        maior = altura[i];
        c = i;
    }
    menor = altura[0];
    d = 0;

    for(i=0; i<10; i++){
        if(menor > altura[i]){
        menor = altura[i];
        d = i;
    }
    }
    printf("A pessoa de maior altura eh do sexo %s e tem altura %.1f\n", sexo[c], maior);
    printf("A pessoa de menor altura eh do sexo %s e tem altura %.1f\n", sexo[d], menor);
    printf("O numero de pessoas do sexo Feminino eh: %d e a media de altura no sexo Feminino eh: %.1f \n",nF, mediaF);
    printf("O numero de pessoas do sexo Masculino eh: %d e a media de altura no sexo Masculino eh: %.1f \n",nM, mediaM);

return 0;
}
