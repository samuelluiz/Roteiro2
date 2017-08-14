#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char numero[1];
    int i=0;

    while(numero!='\n'){
    printf("Digite o numero: \n");
    scanf("%s",numero);
    char numNovo[10]="3";

              if(numero[3]=='-'){
            strcat(numNovo,numero);
            }else if(numero[4]=='-'){
                strcpy(numNovo,numero);
            }else if(numero[7]=='\0'){
                    strncat(numNovo,numero,3);
                    strcat(numNovo,"-");
                    strcat(numNovo,&numero[3]);
            }else if(numero[8]=='\0'){
                   strncpy(numNovo,numero,4);
                   strcat(numNovo,"-");
                   strcat(numNovo,&numero[4]);
            }



        printf("%s\n",numNovo);
        }
        return 0;
    }
