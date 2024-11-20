https://github.com/Dalvelac/Libreria-estandar-de-C/

# Libreria estandar de C

## Descripción General

Este proyecto incluye tres programas de ejemplo escritos en C, cada uno diseñado para ilustrar distintos aspectos del lenguaje, como la manipulación de archivos, el trabajo con cadenas y los cálculos matemáticos. A continuación, se detalla cómo funciona cada archivo.

## Archivos Incluidos

`Archivos.c`: Muestra cómo abrir, escribir y leer archivos en C.

`Cadenas.c`: Realiza operaciones con cadenas, como la comparación y el cálculo de su longitud.

`Funciones-comunes-de-C.c`: Ejemplifica el uso de funciones matemáticas comunes y la generación de números aleatorios.

## Descripción de los Archivos

### 1. Archivos.c

Este archivo muestra cómo trabajar con archivos utilizando las funciones de la biblioteca estándar de entrada/salida (stdio.h).

#### Funcionamiento

Apartado A: Se crea un archivo llamado archivo.txt y se escribe en él la frase "Hola, este es un archivo de texto.". Si el archivo no se puede abrir, se muestra un mensaje de error.

Apartado B: Se crea otro archivo llamado file.txt y se escribe "Hola!!" en él. Luego, se reabre en modo lectura y se muestra su contenido en la consola usando fgets(), que permite leer una línea completa del archivo.

### 2. Cadenas.c

Este archivo permite al usuario ingresar y comparar dos frases, además de calcular la longitud de una tercera frase ingresada.

#### Funcionamiento

Apartado A: El usuario ingresa dos frases para compararlas. Se verifica si las frases son iguales o diferentes utilizando strcmp(). Además, el programa garantiza que las frases ingresadas no excedan los 99 caracteres.

Apartado B: El usuario ingresa una frase adicional, y luego el programa imprime la longitud de la cadena usando strlen(). Se maneja correctamente la eliminación de saltos de línea y los errores relacionados con entradas demasiado largas.

### 3. Funciones-comunes-de-C.c

Este archivo demuestra cómo usar funciones matemáticas y cómo generar números aleatorios en C.

#### Funcionamiento

Apartado A: El usuario ingresa un número y el programa calcula y muestra su valor absoluto usando la función fabs(). Esto es útil para trabajar con números negativos.

Apartado B: Se genera un número aleatorio entre 0 y 99 utilizando rand(). La semilla para la generación de números aleatorios se establece con srand(), lo que garantiza que los números generados cambien cada vez que se ejecuta el programa.

## Notas de Uso

Asegúrese de tener permisos de lectura y escritura en el directorio donde está ejecutando estos programas, ya que los ejemplos de Archivos.c y Cadenas.c crean y leen archivos.

Los nombres de los archivos están definidos en el código, pero puede cambiarlos para probar diferentes escenarios.

Tenga en cuenta los límites de longitud de las cadenas cuando ingrese datos, ya que los programas verifican si se exceden dichos límites.
