#include <stdio.h>
#include <stdlib.h>
#include "Libreria.h"


int main() {

  int eleccion;

    do {
        printf("\n1. Agregar Producto\n2. Editar Producto\n3. Eliminar Producto\n4.   Listar Productos\n5. Salir\n");
        printf("Ingrese su elección: ");
        scanf("%d", &eleccion);
        switch (eleccion) {
            case 1:
                agregarProducto(inventario, &contador);
                break;
            case 2:
                editarProducto(inventario, contador);
                break;
            case 3:
                eliminarProducto(inventario, &contador);
                break;
            case 4:
                listarProductos(inventario, contador);
                break;
            case 5:
                printf("Saliendo del programa\n");
                break;
            default:
                printf("Elección no válida\n");
        }
    } while (eleccion != 5);
    return 0;
}