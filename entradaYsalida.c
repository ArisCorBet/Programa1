#include<stdio.h>

int main()
{
    int num1 ; //Declaro la primera variable (num1) que voy a utilizar como un numero entero (int)
    float num2; //Declaro la segunda variable (num2) para almacenar un numero flotante o decimal (foat)

    // Declaro una cadena de caracteres (char) la cual almacena una frase por lo que le asigne ese nombre (frase); La frase pide al usuario ingrasar un valor tipo entero y otro valor tipo decimal
    char frase[] = "Ingresa un valor entero y un valor decimal: ";

    //Declaro una cadena de caracteres (char) la cual almacena otra frase por lo que le asigne ese nombre (frase2)
    char frase2[]="=====Fin del Programa=====";

    // Utilizo printf para imprimir o mostras la cadena de caracteres antes declarada (frase), incluyendo el formato que se espera %s y un salto de linea \n
    printf("===== Hola Bienvenido: %s\n", frase);
    
    //Utilizo scanf la cual es una funcion de entrada, que me permite ingresar por teclado un dato y almacenarlo en mi variable llamada "num1", esta variable se encuentra acompañada de una & para indicar la direccion de la variable , con el formato %d el cual significa que se espera un dato entero.
    scanf("%d", &num1);

    //Realizo el mismo procedimiento anterior con scanf pero con la variable "num2" y cambiando el formato a %f para esperar un dato tipo flotante
    scanf("%f", &num2);

    //Utilizo printf nuevamente para imprimir o mostrar en patalla el valor de la variable almacenada anteriormente, junto con su formato de numero entero (%d), un salto de linea (\n), por ultimo cerrando comillas y separando con una coma el nombre de la variable "num1"
     printf("El primer valor que ingresaste es: %d\n", num1);

     //Se realiza el mismo procedimiento anterior con la otra variable con el leve cambio de formato (%f) e incluyecnto .1 es un modificador de precisión que indica que solo se imprimirá un dígito después del punto decimal.
    printf("El segundo valor que ingresaste es: %.1f\n", num2 );
    
    //Con printf presento en pantalla una variable de tipo caracter declarada anteriormente llamada frase2 para finalizar mi programa, tomando en cuenta el formato %s y un salto de linea \n
    printf("%s\n", frase2);
    
    return 0; //Esta es una instrucción que indica que la función ha finalizado correctamente y esta devolviendo un valor de salida de 0, en caso de no devolver 0 se considerara algun tipo de error

}