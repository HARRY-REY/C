/*

    En esté programa se usaran los datos principales de C

*/

#include<stdio.h>

int main()
{
    int a; // int utiliza valores interos 
    float b; // float utiliza valores con punto decimal
    char nombre[10]; // char utiliza caracteres como letras, [número de caracteres -1]

    printf("\nIngrese su nombre > ");
    gets(nombre);
    printf("Ingrese su edad > ");
    scanf("%d", &a); // %d para recibir interos. & para guardar el valor en... este caso 'a'
    printf("Ingrese su estatura en m > ");
    scanf("%f", &b); // %f para recibir flotantes. & para guardar el valor en... este caso 'b'

    // %s imprime char, el %f flotantes pero %.2f impime 2 decimales después del punto decimal
    printf("\n%cHola %s! Usted tiene %d a%cos y tiene una estatura de %.2f m \n\n", 173, nombre, a, 164, b);

    /* Si se trabaja en ventana
    system("pause"); // Evita que le programa se cierre
    return 0; // Cierra el programa
    */
}