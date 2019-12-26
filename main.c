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

void seno()
{
    int a;
    float resultado1;
    
    printf("Introduzca el valor angulo\n");
    scanf("%d",&a);
    
    resultado1=sin(a*PI/180);
    
    printf("El seno de %d es %lf", a, resultado1);
    system("pause");
}

void coseno()
{
    int a;
    float resultado;
    
    printf("Introduzca el valor angulo\n");
    scanf("%d",&a);
    
    resultado=cos(a*PI/180);
    
    printf("El seno de %d es %lf", a, resultado);
    system("pause");
}

void tangente()
{
    int a;
    float resultado;
    
    printf("Introduzca el valor angulo\n");
    scanf("%d",&a);
    
    resultado=tan(a*PI/180);
    
    printf("El seno de %d es %lf", a, resultado);
    system("pause");
}

void arcoseno()
{
    float a, resultado;
    
    printf("Ingrese el valor de x: ");
    scanf("%f", &a);
   
    resultado = asin(a);
    
    printf("\nEl arco seno de %.2f es %.2f",a, resultado);
    system("pause");
}

void arcoCoseno(){
  float a, resultado;
  
  printf("Ingrese el valor de x: ");
  scanf("%f", &a);
  
  resultado = acos(a);
  
  printf("\nEl arco coseno de %.2f es %.2f",a, resultado);
  system("pause");
}

void arcoTangente(){
  float a, resultado;
  
  printf("Ingrese el valor de x: ");
  scanf("%f", &a);
  
  resultado = atan(a);
  
  printf("\nEl arco tangente de %.2f es %.2f",a, resultado);
  system("pause");
}

void trigonometria()
{
    int opc;
    float res;
    
    printf("¿Que desea realizar:\n");
    printf("1.- Seno\n");
    printf("2.- Coseno\n");
    printf("3.- Tangente\n");
    printf("4.- Arco seno\n");
    printf("5.- Arco coseno\n");
    printf("6.- Arco tangente\n");
    scanf("%d",&opc);
    
    switch(opc)
    {
        
        case 1:
           
            seno();
            
        break;
        
        
        case 2:
            
            coseno();
            
        break;
        
        
        case 3:
            
            tangente();
            
        break;
        
        case 4:
            
            arcoseno();
            
        break;
        
        case 5:
            
            arcoCoseno();
            
        break;
        
        case 6:
            
            arcoTangente();
            
        break;
                
                
        
    }
    
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