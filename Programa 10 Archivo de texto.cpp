#include <stdio.h>

//Arath Alejandro Cervantes Alvarez 37A ISC

int main() {
    FILE *f = fopen("archivo.txt", "r");
    if (!f) return printf("No se pudo abrir el archivo.\n"), 1;
    
    char c;
    while ((c = fgetc(f)) != EOF) putchar(c);
    
    fclose(f);
    return 0;
}
