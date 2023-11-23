#ifndef PROCESOS_H_INCLUDED
#define PROCESOS_H_INCLUDED
#include <stdio.h>

struct Producto {
  char nombre[50];
  int cantidad;
  float precio;
};

struct Producto inventario[100];
int contador = 0;



void agregarProducto(struct Producto *inventario, int *j) {
    printf("Ingrese el nombre del producto: ");
    scanf("%s", inventario[*j].nombre);
    printf("Ingrese la cantidad: ");
    scanf("%d", &inventario[*j].cantidad);
    printf("Ingrese el precio: ");
    scanf("%f", &inventario[*j].precio);
    (*j)++;
    printf("El producto se agrego exitosamente\n");
}



void editarProducto(struct Producto *inventario, int j) {
    int eleccion;
    printf("Ingrese el índice del producto a editar: ");
    scanf("%d", &eleccion);
    if (eleccion >= 0 && eleccion < j) {
        printf("Ingrese el nuevo nombre del producto: ");
        scanf("%s", inventario[eleccion].nombre);
        printf("Ingrese la nueva cantidad: ");
        scanf("%d", &inventario[eleccion].cantidad);
        printf("Ingrese el nuevo precio: ");
        scanf("%f", &inventario[eleccion].precio);
        printf("El producto se edito exitosamente\n");
    } else {
        printf("No válido\n");
    }
}



void eliminarProducto(struct Producto *inventario, int *j) {
    int eleccion;
    printf("Ingrese el índice del producto a eliminar: ");
    scanf("%d", &eleccion);
    if (eleccion >= 0 && eleccion < *j) {
        for (int i = eleccion; i < *j - 1; i++) {
            inventario[i] = inventario[i + 1];
        }
        (*j)--;
        printf("El producto se elimino exitosamente\n");
    } else {
        printf("No válido\n");
    }
}



void listarProductos(struct Producto *inventario, int contador) {
    if (contador > 0) {
        printf("Lista de productos:\n");
        for (int i = 0; i < contador; i++) {
            printf("Producto %d: %s, \tCantidad: %d, \tPrecio: $%.2f\t, Precio + iva: $%.2f\t", i+1, inventario[i].nombre, inventario[i].cantidad, inventario[i].precio,(inventario[i].precio*0.12)+inventario[i].precio);
        }
    } else {
        printf("No hay productos en el inventario\n");
    }
}


#endif