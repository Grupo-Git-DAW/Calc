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
    int x=1;
    
    printf("¿Qué quieres hacer?\n");
   
    printf("S o s para Sumar\n");
    printf("R o r para Restar\n");
    printf("M o m para Multiplicar\n");
    printf("D o d para Dividir\n");
    printf("T o t para Trigonometria\n");
    printf("E o e  para Exponenciales\n");
    printf("R o r para Raices\n");
    printf("L o l para Logaritmo\n");
    printf("X o x para Salir\n");
    
    
    scanf("%c",&n);
           
    while(x != 0)
    {    
        switch
           {
            
                case 's':
                case 'S': sumar();
                x=0;
                    break;
        
                case 'r':
                case 'R': restar();
                x=0;
                    break;
        
                case 'd':
                case 'D': dividir();
                x=0;
                    break;
        
                case 'm':
                case 'M': multiplicar();
                x=0;
                    break;
     /*   
                case 't':
                case 'T': trigonometria();
      *         x=0;
                    break;
        
                case 'e':
                case 'E': exponencial();
      *         x=0;
                    break;
        
                case 'r':
                case 'R': raiz();
      *         x=0;
                    break;
        
                case 'l':
                case 'L': logatirmo();
      *         x=0;
                    break;
        
                case 'x':
                case 'X': salir();
      *         x=0;
                    break;
       */ 
                default:
                printf("Caracter no valido");
                x=0;
                
                    
             }
                
        
            return 0; 
                  
    }
                       
  
 
        
    
    
        
}