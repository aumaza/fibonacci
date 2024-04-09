#ifndef __FIBO
#define __FIBO

#include "ArrayList.h"

#define MASCARA_ARCHIVO "%[^,],%[^,],%[^,],%[^,],%[^\n]\n"
#define BUFFER buffer[0],buffer[1],buffer[2],buffer[3]
#define HEADER "a,b,resp,num_aureo\n"
#define MASC "%.0f,%.0f,%.0f,%.8f\n"
#define LIM_MAX 180

#include "ArrayList.h"

struct Fibonacci {

float aux;
float buffer;
float resp;
float razon_aurea;

} typedef Fibonacci;

Fibonacci* newfibo(); // constrctor desparametrizado
void makeSerie(char* path);
void parserSerie(ArrayList* list, char* path);
void showSerie(ArrayList* list);
void showOneSerie(Fibonacci* fibo);


#endif
