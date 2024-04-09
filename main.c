#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    system("clear");
    float aux = 0 ;
    float resp = 0;
    float buffer = 1;
    float razon_aurea = 0;

    printf("=========================================================\n");
    printf("Generación de la Serie Fibonacci\n");
    printf("=========================================================\n");
    printf("Vuelta\t          Serie\t                Razon Aurea\n");
    printf("=========================================================\n");

    for(int i = 1; i <=25; i++){

             resp = aux + buffer;
             if(aux > 0){
                razon_aurea = buffer / aux;
             }
            printf("|%4d\t|%16.0f\t|%16.8f\t|\n", i, resp, razon_aurea);
            if(i < 25){
                printf("---------------------------------------------------------\n");
            }
            aux = buffer;
            buffer = resp;
    }

    printf("=========================================================\n");
    getchar();

    return 0;
}
