#include <stdlib.h>
#include <stdio.h>
#include "fibo.h"
#include "ArrayList.h"

Fibonacci* newfibo(){

    Fibonacci* newFibo = (Fibonacci*)malloc(sizeof(Fibonacci));

    if(newFibo != NULL){

        newFibo->aux = 0;
        newFibo->buffer = 0;
        newFibo->resp = 0;
        newFibo->razon_aurea = 0;
    }
    return newFibo;
}

void makeSerie (char* path ){
    FILE* fp = fopen(path, "w");
    Fibonacci* fibo = newfibo();

    if(fp != NULL && fibo != NULL){

        fibo->aux = 0;
        fibo->buffer = 1;
        fibo->resp = 0;
        fibo->razon_aurea = 0;
        fprintf(fp,HEADER);

        for(int i = 0; i < LIM_MAX; i++){
                fibo->resp = fibo->aux + fibo->buffer;
                 if(fibo->aux > 0){
                    fibo->razon_aurea = fibo->buffer / fibo->aux;
                }
                fprintf(fp,MASC,fibo->aux,fibo->buffer,fibo->resp,fibo->razon_aurea);

                fibo->aux = fibo->buffer;
                fibo->buffer = fibo->resp;
        }
        system("clear");
        printf("==================================\n");
        printf("Archivo Generado exitosamente\n");
        printf("==================================\n");
        getchar();
    }else{
        system("clear");
        printf("==================================\n");
        printf("Hubo un problema al generar el archivo\n");
        printf("==================================\n");
        getchar();
    }

}


void showOneSerie ( Fibonacci* fibo ){

    if(fibo != NULL){
        printf("%0.f", fibo->aux);
        printf("%0.f", fibo->buffer);
        printf("%0.f", fibo->resp);
        printf("%.8f", fibo->razon_aurea);
    }

}



void showSerie ( ArrayList* list ){
    system("clear");
    Fibonacci* fibo = newfibo();

    printf("=========================================================\n");
    printf("Generación de la Serie Fibonacci\n");
    printf("=========================================================\n");
    printf("Vuelta\t          Serie\t                Razon Aurea\n");
    printf("=========================================================\n");

    for(int i = 1; i <= list->len(list); i++){

            fibo = (Fibonacci*)list->get(list, i);
            showOneSerie(fibo);

            if(i < list->len(list)){
                printf("---------------------------------------------------------\n");
            }

    }

    printf("=========================================================\n");

}
