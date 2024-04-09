#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "fibo.h"
#include "tools.h"

int main(int argc, char *argv[]){

    system("clear");
    ArrayList* list = al_newArrayList();
    menu(list);

    return 0;
}
