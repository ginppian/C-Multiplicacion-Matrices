//
//  main.c
//  MultiplicacionMatrices
//
//  Created by ginppian on 15/06/17.
//  Copyright © 2017 OfferCity. All rights reserved.
//

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

