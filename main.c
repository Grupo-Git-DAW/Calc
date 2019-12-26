#include <stdio.h>
#include <stdlib.h>

void dividir()
{
    float a,b,res;

    
    printf("Primer Número\n");
    scanf("%f",&a);
    printf("Segundo Número\n");
    scanf("%f",&b);
    
    res = a/b;

    
    printf("La división entre %f y %f es --> %f\n", a, b, res);

}

void multiplicar()
{
    float a,b,res;
    
    printf("Primer Número\n");
    scanf("%f",&a);
    printf("Segundo Número\n");
    scanf("%f",&b);
    
    res = a*b;
    
    printf("La multiplicación entre %f y %f es --> %f", a, b, res);
}

void restar()
{
    float a,b,res;
    
    printf("Primer Número\n");
    scanf("%f",&a);
    printf("Segundo Número\n");
    scanf("%f",&b);
    
    res = a-b;
    
    printf("La resta de %f y %f es --> %f", a, b, res);
}

void sumar()
{
    float a,b,res;
    
    printf("Primer Número\n");
    scanf("%f",&a);
    printf("Segundo Número\n");
    scanf("%f",&b);
    
    res = a+b;
    
    printf("La suma de %f y %f es --> %f", a, b, res);
}

int main() 
{
    char n;
    
    printf("¿Qué quieres hacer?\n");
    //CREAR MENÚ 
    scanf("%c",&n);
            
    switch(n)
    {
        case 's':
        case 'S': sumar();
        break;
        
        case 'r':
        case 'R': restar();
        break;
        
        case 'd':
        case 'D': dividir();
        break;
        
        case 'm':
        case 'M': multiplicar();
        break;
    }
    return 0;
}

