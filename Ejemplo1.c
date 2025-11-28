#include <stdio.h>

int main() {
    int x = 5;
    int y = -x;  // aplica el operador unario -

    printf("x = %d\n", x);
    printf("-x = %d\n", y);

    int z = -(-10);  // doble negación
    printf("-(-10) = %d\n", z);

    return 0;
}

// Este programa demuestra el uso del operador unario - (negación) en C.
// El operador - cambia el signo del operando.
// En el ejemplo, se muestra cómo se aplica el operador - a un número entero positivo y a un número negativo.
// La salida del programa será:

// x = 5
// -x = -5
// -(-10) = 10