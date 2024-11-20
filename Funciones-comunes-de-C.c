#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
    //Apartado A, con input de usuario.
    double absoluto;
    printf("Ingrese un numero para calcular su valor absoluto: ");

    if (scanf("%lf", &absoluto) != 1) {
        // Error para los inputs invalidos
        fprintf(stderr, "Error: Ingrese un numero valido.\n");
        return 1; // Devolver un error
    }

    double abs_num = fabs(absoluto);

    //Apartado B
    srand(time(2)); // Semilla
    int random = rand() % 100;

    printf("El valor absoluto del numero es: %.2lf\n", abs_num);
    printf("Numero aleatorio: %d\n", random);

    return 0;
}