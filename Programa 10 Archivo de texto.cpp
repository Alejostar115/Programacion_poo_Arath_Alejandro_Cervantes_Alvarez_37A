#include <stdio.h>

//Arath Alejandro Cervantes Alvarez 37A ISC
//programa abre un archivo llamado "archivo.txt", lee su contenido carácter por carácter y lo muestra en la pantalla. Si el archivo no existe o no puede abrirse, muestra un mensaje de error

int main() {
    FILE *f = fopen("archivo.txt", "r");
    if (!f) return printf("No se pudo abrir el archivo.\n"), 1;
    
    char c;
    while ((c = fgetc(f)) != EOF) putchar(c);
    
    fclose(f);
    return 0;
}
