#include <stdio.h>
#include <string.h>

int main() {
    //Apartado A, con ejercicio extra: añadir que el usuario pueda ingresar una frase para comparar.
    char str1[100];
    char str2[100];

    printf("Ingrese una frase para comparar: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL) {
        printf("Error: Entrada no valida.\n");
        return 1; // Salir del programa con un código de error
    }
    // Verificar si se ingresaron más de 99 caracteres
    if (str1[strlen(str1) - 1] != '\n' && strlen(str1) == sizeof(str1) - 1) {
        printf("Error: Se ha ingresado mas de 99 caracteres.\n");
        return 1; // Salir del programa con un código de error
    }

    printf("Ingrese otra frase para comparar: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) {
        printf("Error: Entrada no valida.\n");
        return 1; // Salir del programa con un código de error
    }
    // Verificar si se ingresaron más de 99 caracteres
    if (str2[strlen(str2) - 1] != '\n' && strlen(str2) == sizeof(str2) - 1) {
        printf("Error: Se ha ingresado mas de 99 caracteres.\n");
        return 1; // Salir del programa con un código de error
    }

    // Eliminar el salto de línea final que fgets() almacena, si existe
    size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    //Apartado B
    char str3[1000];
    printf("Ingrese una frase: ");
    if (fgets(str3, sizeof(str3), stdin) == NULL) {
        printf("Error: Entrada no valida.\n");
        return 1; // Salir del programa con un código de error
    }
    if (str3[strlen(str3) - 1] != '\n' && strlen(str3) == sizeof(str3) - 1) {
        printf("Error: Se ha ingresado mas de 999 caracteres.\n");
        return 1; // Salir del programa con un código de error
    }

    // Eliminar el salto de línea final que fgets() almacena, si existe
    size_t len3 = strlen(str3);
    if (len3 > 0 && str3[len3 - 1] == '\n') {
        str3[len3 - 1] = '\0';
    }

    size_t longitud = strlen(str3); // Longitud de la cadena
    printf("La longitud de la cadena es: %zu\n", longitud);

    return 0;
}
