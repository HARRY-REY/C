/*

    En esté programa se usaran los datos principales de C

*/

#include<stdio.h>

// Agregamos librerias para caracteres en español
#include<locale.h>
#include<windows.h>

// Establecer el idioma en español por medio de esta función
void espanol()
{
    setlocale(LC_ALL, "spanish"); // cambia locale para linux
    SetConsoleCP(1252); // cambia STDIN para windows
    SetConsoleOutputCP(1252); // cambia STDOUT para winows
}

int main()
{
    espanol(); // La función entra en acción

    int a; // int utiliza valores interos 
    float b; // float utiliza valores con punto decimal
    char nombre[10]; // char utiliza caracteres como letras, [número de caracteres -1]

    printf("\nIngrese su nombre > ");
    gets(nombre);

    printf("\nIngrese su edad > ");
    scanf("%d", &a); // %d para recibir interos. & para guardar el valor en... este caso 'a'

    printf("\nIngrese su estatura > ");
    scanf("%f", &b); // %f para recibir flotantes. & para guardar el valor en... este caso 'b'

    // %s imprime char, el %f flotantes pero %.2f impime 2 decimales después del punto decimal
    printf("\n\t¡Hola %s! Usted tiene %d años y tiene una estatura de %.2f m \n\n", nombre, a, b);

    system("pause"); // Evita que le programa se cierre

    return 0; // Cierra el programa
}