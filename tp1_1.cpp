#include <stdio.h>

int main (){
    printf("Hola mundo");
    int *entero;
    int num = 7;
    entero = &num;
    printf("\n Contenido del puntero: %d",*entero);
    printf("\n Direccion de memoria almacenada por el puntero: %p",entero);
    printf("\n La direccion de memoria de la variable: %p",&num);
    printf("\n La direccion de memoria del puntero: %p",&entero);
    printf("\n El tamanio de memoria que utiliza la variable num: %d",sizeof(num));
    return 0;
}