Multiplicación de Matrices NxN en Lenguaje C Puro
===========

<p align="center">
  <img src="https://github.com/ginppian/C-Multiplicacion-Matrices/blob/master/imgs/img3.png" width="89" height="244" />
</p>

## Objetivo

Se busca hacer una multiplicación de Matrices de NxN.

## Descripción

* En el siguiente enunciado definimos la *dimensión* de la matriz como una constante:

```
#define dimension 2
```

* A continuación procedemos llenar todas las posiciones de la matriz A y la matriz B ingresadas por el usuario.

* Para hacer la *MULTIPLICACIÓN* necesitamos de 3 ciclos uno recorre las columnas (i), otro que recorre las filas (j), y otro que ejecuta las *SUMAS* según el número de dimensión:

```
    for (int i=0; i < dimension; i++){
        for (int j=0; j < dimension; j++){
            int temporal = 0;
            for (int k=0; k < dimension; k++){
                temporal += A[i][k] * B[k][j];
                C[i][j] = temporal ;
            }
        }
    }
```

## Código

```
#include <stdio.h>
#define dimension 2
int main(int argc, const char * argv[]) {

    int A[dimension][dimension];
    int B[dimension][dimension];
    int C[dimension][dimension];
    
    // Llena A
    printf("Llenemos Matriz A:\n");
    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            
            printf("Ingresa A%d%d: \n", i,j);
            scanf("%d", &A[i][j]);
        
        }
    }

    // Llena B
    printf("Llenemos Matriz B:\n");
    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            
            printf("Ingresa B%d%d: \n", i,j);
            scanf("%d", &B[i][j]);
            
        }
    }
    
    // Multiplica
    for (int i=0; i < dimension; i++){
        for (int j=0; j < dimension; j++){
            int temporal = 0;
            for (int k=0; k < dimension; k++){
                temporal += A[i][k] * B[k][j];
                C[i][j] = temporal ;
            }
        }
    }
    
    // Imprime A
    printf("Matriz A\n");
    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            
            printf("A[%d][%d]: %d \n", i,j, A[i][j]);
            
        }
    }
    
    // Imprime B
    printf("Matriz B\n");
    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            
            printf("B[%d][%d]: %d \n", i,j, B[i][j]);
            
        }
    }

    // Imprime C
    printf("Matriz C\n");
    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            
            printf("C[%d][%d]: %d \n", i,j, C[i][j]);
            
        }
    }

    return 0;
}
```

## Ejemplo

<p align="center">
  <img src="https://github.com/ginppian/C-Multiplicacion-Matrices/blob/master/imgs/img1.png" width="273" height="161" />
</p>

[Fuente](https://www.matesfacil.com/matrices/resueltos-matrices-producto.html)

<p align="center">
  <img src="https://github.com/ginppian/C-Multiplicacion-Matrices/blob/master/imgs/img2-2.png" width="221" height="345" />
</p>

<p align="center">
  <img src="https://github.com/ginppian/C-Multiplicacion-Matrices/blob/master/imgs/img2-3.png" width="220" height="214" />
</p>

## Contacto

<p align="center">
  <img src="https://github.com/ginppian/Bash-Cowsay/blob/master/followme.png" width="180" height="206" />
</p>