#include <stdio.h>
#define filas 5
#define columnas 5

int main() {
    int i, j, desicion, posicion, opcion, fila;
    int disponible[25];
    double cine[filas][columnas];

    for ( i = 0; i < 25; ++i) {
        disponible[i]=0;
    }




    for (i = 0; i < filas; ++i) {
        for (j = 0; j < columnas; ++j) {
            cine[i][j]= 0;
        }
    }

    printf("Ingrese el numero de la opcion\n");
    printf("1- Comprar Entrada\n");
    printf("2- Mostrar ganancias de la sala\n");
    scanf("%d",&opcion);

    do {


        if (opcion == 1) {
            printf("En que posicion se desea sentar?\n");
            printf("--------------------------------\n");
            for (i = 1; i <= 25; ++i) {
                if (i % 5 == 0) {
                    printf("%d\t\n", i);
                } else {
                    printf("%d\t", i);
                }
            }
            do {
                printf("Ingrese donde desea sentarse\n");
            scanf("%d", &posicion);
        }while (posicion>25 || posicion<1);
            if(disponible[posicion-1]==1){
                printf("El asiento ya esta ocupado\n");
            }else {

                if (posicion >= 1 && posicion <= 5) {
                    fila = 0;
                    cine[fila][posicion-1]=5;
                } else if (posicion >= 6 && posicion <= 10) {
                    fila = 1;
                    cine[fila][posicion-6]=3.5;
                } else if (posicion >= 11 && posicion <= 15) {
                    fila = 2;
                    cine[fila][posicion-11]=3.5;
                } else if (posicion >= 15 && posicion <= 20) {
                    fila = 3;
                    cine[fila][posicion-15]=3.5;
                } else if (posicion >= 21 && posicion <= 25) {
                    fila = 4;
                    cine[fila][posicion-21]=2.5;
                }
                disponible[posicion - 1] = 1;
            }

        }else if(opcion==2){
            int ganancia =0;
            for (int i = 0; i < filas ; ++i) {
                for ( j = 0; j < columnas; ++j) {
                    ganancia = ganancia + cine[i][j];
                }

            }
            printf("Ganancia: %d",ganancia);
            printf("\n");
        }

        printf("Ingrese el numero de la opcion\n");
        printf("1- Comprar Entrada\n");
        printf("2- Mostrar ganancias de la sala\n");
        printf("Cualquier otro numero para salir\n");
        scanf("%d",&opcion);
    }while (opcion==1 || opcion==2);

    return 0;
}