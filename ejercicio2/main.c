#include <stdio.h>
#include <stdlib.h>

int main() {

    int tamanio, i, eliminar ;

    printf("Ingrese la dimension del vector\n");
    scanf("%d", &tamanio);
    int vector[tamanio];
    //Llenando el vector con numeros aleatorios
    for ( i = 0; i < tamanio; ++i) {
        vector[i] = rand()%25;
    }

    //Inprimiendo los numeros del vector
    printf("\n");
    for ( i = 0; i < tamanio; ++i) {
        printf("%d\t",vector[i]);
    }

    printf("Que posicion desea eliminar?");
    scanf("%d",&eliminar);

    if(eliminar<=tamanio){
        vector[eliminar-1] = 0;
        printf("\n");
        for ( i = 0; i < tamanio; ++i) {
            printf("%d\t",vector[i]);
        }
    } else{
        printf("No existe esa posicion");
    }

    return 0;
}