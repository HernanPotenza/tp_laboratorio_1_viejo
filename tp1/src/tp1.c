/*
 ============================================================================
 Name        : tp1.c
 Author      : hernanPotenza
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

/** \brief Es la funcion principal que organiza el programa y llama a las demas funciones
 *
 * \return int
 *
 */
int main()

{
    setbuf(stdout,NULL);
    int opcion;
    float num1;
    float num2;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int factorial1;
    int factorial2;
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    int validarNumeroDecimal;

    do
    {
        fflush(stdin);

        if(flag1==0)
        {
            printf("1. Ingresar 1er operando \n");

        }
        else
        {
            printf("1. Ingresar 1er operando (A=%.2f)\n", num1);

        }

        if(flag2==0)
        {
            printf("2. Ingresar 2do operando \n");

        }
        else
        {
            printf("2. Ingresar 2do operando (B=%.2f)\n", num2);

        }



        printf("3. Calcular todas las operaciones\n");



        printf("4. Informar resultados\n");


        printf("5. Salir\n");

        printf("Elija una opcion: \n");

        fflush(stdin);
        scanf("%d",&opcion);

        if(opcion<1 || opcion>5)
        {
            printf("Ingrese una opcion valida\n");
        }

        else
        {
            system("cls");
            switch(opcion)
            {
            case 1:
                printf("Ingrese 1er operando: ");
                scanf("%f",&num1);
                flag1 = 1;

                break;

            case 2:
                printf("2. Ingresar 2do operando: ");
                scanf("%f",&num2);
                flag2 = 1;
                system("cls");
                break;

            case 3:
                if(flag1==0 || flag2==0)
                {
                    printf("Ingrese primer y segundo operando antes de calcular las operaciones.\n");
                }
                else
                {
                    printf("Se realizaran las siguientes operaciones:\n");
                    printf("a) Calcular la suma (A+B)\n");
                    suma = funcionSuma(num1,num2); //Con esta linea llamo a la funcion suma
                    //Y le doy los dos numeros para que haga la cuenta
                    printf("b) Calcular la resta (A-B)\n");
                    resta = funcionResta(num1,num2); //Aca ocurre lo mismo con la resta

                    printf("c) Calcular la division (A/B)\n");
                    division = funcionDivision(num1,num2); //Lo mismo con la division

                    printf("d) Calcular la multiplicacion (A*B)\n");
                    multiplicacion = funcionMultiplicacion(num1,num2); //De nuevo el mismo metodo
                    //Para la multiplicacion
                    printf("e) Calcular el factorial (A! y B!\n");
                    factorial1 = funcionFactorial(num1); // Y finalmente el factorial
                    factorial2 = funcionFactorial(num2);

                    flag3 = 1;
                }

                system("pause");
                system("cls");
                break;

            case 4:
                if(flag1==0 || flag2==0 || flag3==0)
                {
                    printf("Ingrese primer y segundo operando, y calcule las operaciones antes de mostrar los resultados\n");
                }
                else
                {
                    printf("Los resultados son los siguientes:\n");
                    printf("a) El resultado de %.2f + %.2f es: %.2f\n",num1,num2,suma);
                    printf("b) El resultado de %.2f - %.2f es: %.2f\n",num1,num2,resta);

                    if(division != 0) //Con este if else verifico si la funcion me devolvio in -1 o no
                    {
                        //Si me devolvio algo distinto de -1, entonces le muestro el resultado
                        printf("c) El resultado de %.2f / %.2f es: %.2f\n",num1,num2,division); //De la division
                    }
                    else        //Si la funcion division me dio un -1 anteriormente
                    {
                        printf("No se puede dividir por cero\n"); //Aca le indico al usuario que no se puede dividir por cero
                    }

                    printf("d) El resultado de %.2f * %.2f es: %.2f\n",num1,num2,multiplicacion);

                    validarNumeroDecimal = validarDecimal(num1);
                    if(validarNumeroDecimal==0)
                    {
                        printf("\ne) El factorial de %.2f (primer numero ingresado) es: %d",num1,factorial1);
                    }
                    else
                    {
                        printf("\n%.2f no es un numero entero, por lo cual no se le calcula el factorial",num1);
                    }

                    validarNumeroDecimal = validarDecimal(num2);
                    if(validarNumeroDecimal==0)
                    {
                        printf("\ne) El factorial de %.2f (segundo numero ingresado) es: %d\n",num2,factorial2);
                    }
                    else
                    {
                        printf("\n%.2f no es un numero entero, por lo cual no se le calcula el factorial\n",num2);
                    }
                }

                system("pause");
                system("cls");
                break;

            case 5:
                printf("Fin de operaciones\n");
                break;
            }
        }
    }
    while(opcion!=5);

	return EXIT_SUCCESS;
}
