#include <stdio.h>
#include <stdlib.h>
#include "tools.h"
#include "fibo.h"
#include "ArrayList.h"


int optionValid()
{
   int ok;
   int ch;
   int opc;

    do
    {
      printf("\nOpcion: ");
      fflush(stdout);
      if ((ok = scanf("%d", &opc)) == EOF)
         return 1;


      if ((ch = getchar()) != '\n')
      {
         ok = 0;

         while ((ch = getchar()) != EOF && ch != '\n');
      }
   }while(!ok);

   return opc;
}

void menu(ArrayList* list){

    int opcion;

    do{
    system("clear");
    printf("==================================\n");
    printf("SERIE DE FIBONACCI MENU\n");
    printf("==================================\n");
    printf("1. Generar archivo CSV\n");
    printf("2. Mostar Serie Fibonacci\n");
    printf("3. Graficar Serie\n");
    printf("0. Salir\n");
    printf("==================================\n");
    opcion = optionValid();



    switch(opcion){
        case 1:  makeSerie("serie.csv"); break;
        case 2:  showSerie(list); break;
    }

    }while(opcion != 0);


}
