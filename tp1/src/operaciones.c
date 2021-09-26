/*
 * operaciones.c
 *
 *  Created on: 25 sep. 2021
 *      Author: herna
 */

#include <stdlib.h>
#include <stdio.h>


/** \brief Es la funcion que realiza la suma de los operandos
 *
 * \param num1 int El primer operando a sumar
 * \param num2 int El segundo operando a sumar
 * \return int El resultado de la suma se retorna al main
 *
 */
float funcionSuma(float num1, float num2)
{

    float resultadoSuma;

    resultadoSuma=num1+num2;

    return resultadoSuma;
}

/** \brief Es la funcion que realiza la resta de los operandos
 *
 * \param num1 int Es el primer operando al cual se le va a restar el segundo operando
 * \param num2 int El segundo operando que actua como sustraendo
 * \return int Es el resultado de la resta, que se retorna al main
 *
 */
float funcionResta(float num1, float num2)
{
    float resultadoResta;

    resultadoResta=num1-num2;

    return resultadoResta;
}

/** \brief Es la funcion que lleva a cabo la division
 *
 * \param num1 int Es el primer operando que luego se divide por el segundo operando
 * \param num2 int Es quien divide al primer operando
 * \return float El resultado de la division que se devuelve al main
 *
 */
float funcionDivision(float num1, float num2)
{
	float resultadoDivision;
	float retorno;

    if(num2==0)
    {
        retorno = 0;
    }
    else
    {
        resultadoDivision = (float) num1 / num2;
        retorno = resultadoDivision;
    }
    return retorno;
}

/** \brief Funcion para multiplicar operandos
 *
 * \param num1 int Es el primer operando con el que se realizara la operacion
 * \param num2 int Es el segundo operando
 * \return int Resultado de la multiplicacion de ambos operandos
 *
 */
float funcionMultiplicacion(float num1, float num2)
{
    float resultadoMultiplicacion;

    resultadoMultiplicacion = num1 * num2;

    return resultadoMultiplicacion;
}

/** \brief Es la funcion para realizar el factorial del numero ingresado
 *
 * \param num1 int Es el numero al cual se le va a calcular el factorial
 * \return int Resultado del factorial
 *
 */
int funcionFactorial(float num1)
{
    int resultadoFactorial = 1;
    int f;
    int retorno;
    int ent;
    int flag = 0;

    ent = num1;

    if(num1 - ent) {
    	flag = 1;
      }
      else {
        for(f=1; f<=num1; f++)
        	{
        		resultadoFactorial = resultadoFactorial * f;
        	}
      }
    if(flag==1)
    {
    	printf("Si ve este mensaje es porque ingreso al menos un numero decimal\nEsta calculadora no contempla la funcion gamma y por lo tanto solo calcula factorial de numeros enteros\n");
    }


    retorno = resultadoFactorial;

    return retorno;
}

/** \brief
 *
 * \param num float numero que se le pasa a la funcion para validar si es entero o flotante
 * \return int retorno que indica si el numero que se paso es o no un entero
 *
 */
int validarDecimal(float num)
{
  int ent;
  int retorno;

  ent = num;

  if(num - ent) {
   //El numero ingresado es decimal
    retorno = 1;
  }
  else {
   //El numero ingresado es entero
    retorno = 0;
  }
  return retorno;
}



