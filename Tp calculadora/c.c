int suma(int x, int y)
{
    int resultado;
    resultado = x+y;
    return resultado;
}

int resta(int x, int y)
{
    int resultado;
    resultado = x-y;
    return resultado;
}

int multiplicacion(int x, int y)
{
    int resultado;
    resultado = x*y;
    return resultado;
}

float division(int x, int y)
{
    float resultado;
    resultado = (float)x/y;
    return resultado;
}

long factorial(int x)
{
    int resultado;
    if(x==0)
    {
        resultado=1;
    }
    else
    {
        resultado=x*factorial(x-1);
    }
    return resultado;
}

void conjuntoDeOperaciones(int x, int y)
{
    printf("La suma de los numero ingresados es: %d\n",suma(x,y));
    printf("La resta de los numeros ingresados es: %d\n",resta(x,y));
    if(y==0)
    {
        printf("La division no se puede realizar.\nY el divisor no puede ser cero\n");
    }
    else
    {
        printf("La division de los numeros ingresados es: %.2f\n",division(x,y));
    }
    printf("La multiplicacion es: %d\n",multiplicacion(x,y));
    if(x<0)
    {
        printf("El factoreo no fue posible.\nY el numero no puede ser menor a cero\n");
    }
    else
    {
        printf("El factorial de %d es %li\n",x,factorial(x));
    }
}

int validacionDelRango(int opcion, int de, int a)
{
    int resultado=0;
    if((opcion >= de)&&(opcion <= a))
        {
            resultado = 1;
        }
    return resultado;
}

int validacionDeLaDivision(int x, int y)
{
    if(y==0)
    {
        printf("Division no posible, el divisor no puede ser cero\n");
    }
    else
    {
        printf("La division es: %.2f\n", division(x,y));
    }
}

int validacionDelFactorial(int x, int y)
{
    if(x<0)
    {
        printf("El factoreo no fue posible.\nY el numero no puede ser menor a cero\n");
    }
    else
    {
        printf("El factorial de %d es %li\n",x,factorial(x));
    }
}
