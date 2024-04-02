#include <stdio.h>

float cuadrado (float a);
void cuadradoSinRetorno (float a);
void recibirVariable (int a);
void Invertir(int *a, int *b);
void orden(int *a , int *b);
int main () {
    float real = 5;
    int num1 = 18;
    int num2=22;
    
    puts("------------Fucion cuadrado------------");
    real = cuadrado(real);
    printf("Deberia dar (25): %.2f\n",real);
    puts("------------Cuadrado sin retorno------------");
    printf("Deberia dar (9): ");
    cuadradoSinRetorno(3);
    puts("--------Recibo variable y mustro-----");
    recibirVariable(num1);
    puts("--------Invertir-----");
    Invertir(&num1,&num2);
    printf("num1: %d \n",num1);
    printf("num2: %d \n",num2);
    puts("--------orden----------");
    orden(&num1,&num2);
    printf("num1: %d \n",num1);
    printf("num2: %d \n",num2);
    return 0;
}
//a)
float cuadrado (float a){
    return (a*a);
}
//b)
void cuadradoSinRetorno (float a){
    printf("%f\n",a*a);
}
//c)
void recibirVariable (int a){
    printf("Direccion: %p",&a);
    printf("\nContenido: %d\n",a);
}
//d)
void Invertir(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
//e) 
void orden(int *a , int *b){
    int aux;
    if ((*a)<=(*b))
    {
        
    }else {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

