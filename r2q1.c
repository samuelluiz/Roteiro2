#include <stdio.h>
#include <stdlib.h>

int main(){
    int h, m, n;
    printf("Digite que horas sao: \n");
    scanf("%d:%d", &h, &m);

    if (h>12){
        n = 1;
    } else {
        n = 0;
    }

    switch (h){
        case 13:
            h = 1;
            break;

        case 14:
            h = 2;
            break;

        case 15:
            h = 3;
            break;

        case 16:
            h = 4;
            break;
        case 17:
            h = 5;
            break;
        case 18:
            h = 6;
            break;
        case 19:
            h = 7;
            break;
        case 20:
            h = 8;
            break;
        case 21:
            h = 9;
            break;
        case 22:
            h = 10;
            break;
        case 23:
            h = 11;
            break;
        case 24:
            h = 12;
            break;
    }

    switch (n){
        case 0:
            printf("%d:%d\n", h, m);
            break;

        case 1:
           printf("%d:%dP.M.\n", h, m);
            break;
    }
return 0;
}
