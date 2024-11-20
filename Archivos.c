#include <stdio.h>

int main() {

    //Apartado A
    FILE *archivo;
    archivo = fopen("archivo.txt", "w");
    if (archivo == NULL) { // Verificar si el archivo se abrió correctamente
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "Hola, este es un archivo de texto.\n"); // Escribir en el archivo
    fclose(archivo);

    // Apartado B

    FILE *file = fopen("file.txt", "w"); // Abrir el archivo en modo de escritura
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(file, "Hola!!\n"); // Escribir en el archivo

    fclose(file);

    // Reabrir el archivo en modo de lectura
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }
    char buffer[100];
    if (fgets(buffer, sizeof(buffer), file) != NULL) { // Leer una línea
        printf("El contenido del archivo es: %s\n", buffer);
    } else {
        printf("Error al leer el contenido del archivo.\n");
    }

    return 0;
}