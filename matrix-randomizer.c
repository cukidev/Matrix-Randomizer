/* 
||||||DESCRIPCIÓN DEL PROGRAMA:|||||||
Realizaremos un programa, donde primeramente tenemos que pedirle al usuario dos numeros, 
representados por fila y columnas respectivamente. Una vez otorgados ambos dígitos, se crea la matriz y 
se randomiza el contenido. A partir de la randomización, identificamos los elementos con índice 
par e impar y se crea otra sub matriz con estos elementos e imprimimos los tres.
*/

/* Agregamos las librerias*/
#include <stdio.h> /* Para usar printf*/
#include <stdlib.h> /* Para usar rand*/
#include <time.h> /* Para usar time*/

void main() /* Función principal*/
{
    srand(time(NULL)); // Esto es para que la semilla del random sea la hora actual
    int filas, columnas, i, j; // definimos filas y columnas
    printf("Bienvenido al programa de randomizador de matrices.\n");
    printf("Introduzca el numero de filas: "); // pedimos el numero de filas
    scanf("%d", &filas); // leemos el numero de filas
    printf("Introduzca el numero de columnas: "); // pedimos el numero de columnas
    scanf("%d", &columnas); // leemos el numero de columnas
    /* una vez que tenemos los datos, creamos la matriz */
    int matriz[filas][columnas]; // definimos la matriz
    printf("\n La matriz resultante es: \n");  // imprimimos esto para presentar la matriz
    /* los elementos seran entre 0 y 9 */
    for (i = 0; i < filas; i++) // recorremos las filas
    {
        for (j = 0; j < columnas; j++) // recorremos las columnas
        {
            matriz[i][j] = rand() % 10; // asignamos un numero aleatorio
            printf("%d ", matriz[i][j]); // imprimimos la matriz
        }
        printf("\n"); //salto de linea
    }    
    /* de la matriz original, identificamos las filas y columnas impares y la convertimos en una matriz nueva */
    int matriz_impares[filas][columnas]; // creamos la matriz nueva para los impares
    printf("\n La matriz con los elementos impares es: \n"); // imprimimos esto para presentar la matriz
    for (i = 0; i < filas; i++) //recorremos las filas
    {
        for (j = 0; j < columnas; j++) //recorremos las columnas
        {
            if (i % 2 == 0 && j % 2 == 0) //si el indice es par
            {
                matriz_impares[i][j] = matriz[i][j]; //asignamos el valor de la matriz original
            }
            else //por el contrario, eliminamos de la matriz filas y columnas con indice par
            {
                matriz_impares[i][j] = 0; //asignamos el valor 0
            }
            printf("%d ", matriz_impares[i][j]); //imprimimos la matriz
        }
        printf("\n"); //salto de linea
    }
    /* de la matriz original, identificamos las filas y columnas pares y la convertimos en una matriz nueva */
    int matriz_pares[filas][columnas]; //creamos la matriz nueva
    printf("\n La matriz con los elementos pares es: \n"); // imprimimos esto para presentar la matriz
    for (i = 0; i < filas; i++) //recorremos las filas
    {
        for (j = 0; j < columnas; j++) //recorremos las columnas
        {
            if (i % 2 == 1 && j % 2 == 1) //si el indice es impar
            {
                matriz_pares[i][j] = matriz[i][j]; //asignamos el valor de la matriz original
            }
            else //por el contrario, eliminamos de la matriz filas y columnas con indice impar
            {
                matriz_pares[i][j] = 0; //asignamos el valor 0
            }
            printf("%d ", matriz_pares[i][j]); //imprimimos la matriz
        }
        printf("\n"); //salto de linea*
    }
    printf("\n"); //salto de linea
    printf("Programa realizado por Cukidev."); // creditos
}
