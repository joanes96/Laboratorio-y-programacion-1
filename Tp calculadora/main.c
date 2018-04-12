#include <stdio.h>
#include <stdlib.h>
#include "h.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int x=0;
    int y=0;

    do{
        printf("\n");
        printf("1.Ingrese el Primer operando (A=x)\n");
        printf("2.Ingrese el Segundo operando (B=y)\n");
        printf("3.Calcular la suma (A+B)\n");
        printf("4.Calcular la resta (A-B)\n");
        printf("5.Calcular la division (A/B)\n");
        printf("6.Calcular la multiplicacion (A*B)\n");
        printf("7.Calcular el factorial (A!)\n");
        printf("8.Calcular todas las operaciones\n");
        printf("9.Salir\n");
        printf("A=%d\nB=%d\n", x, y);
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);

        while(!validacionDelRango(opcion,1,9))
        {
            printf("\nIngrese la opcion correspondiente ");
            scanf("%d", &opcion);
        }
        switch(opcion)
        {
            case 1:
                printf("\nIngrese un numero: ");
                scanf("%d", &x);
                break;
            case 2:
                printf("\nIngrese segundo numero: ");
                scanf("%d", &y);
                break;
            case 3:
                printf("\nLa suma es: %d\n\n",suma(x,y));
                break;
            case 4:
                printf("\nLa resta es: %d\n\n",resta(x,y));
                break;
            case 5:
                validacionDeLaDivision(x,y);
                break;
            case 6:
                printf("\nLa multiplicacion es: %d\n",multiplicacion(x,y));
                break;
            case 7:
                validacionDelFactorial(x,y);
                break;
            case 8:
                conjuntoDeOperaciones(x,y);
                break;
            case 9:
                seguir = 'n';
                break;
            default:
            break;
        }
    }while(seguir=='s');
    return 0;
}
