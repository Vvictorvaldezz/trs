#include "miniwin.h"
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace miniwin;

int main() {
   setlocale(LC_ALL, "");
//---------------------Declaración de variables y matrices
	int	 matriz1[100][100];
	int matriz2[100][100];
	int matrizRes[100][100];
	int filas1=0, columnas1=0, filas2=0, columnas2=0;
	int i=0, j=0, k=0;
	int suma=0;


	puts("MÉTODO DE TRASLACIÓN\n");
	puts("Matriz MHT");
	
	
	puts("Introduzca un número en la matriz de acuerdo a la posicion");
//------------------------------Llena la matriz
	for(i=1; i<=3; i++){  //Filas
    	for(j=1; j<=3; j++){ //Columnas
        	printf("[%d,%d]: ", i ,j);
        	scanf("%d", &matriz1[i][j]);
    	}//Fin Columnas
	}//Fin Filas
	printf("\n");
//-----------------------------Imprime la matriz
	for(i=1; i<=3; i++){  //Filas
	    for(j=1; j<=3; j++){  //Columnas
	        printf("[%d]", matriz1[i][j]);
	    }// Fin columnas
	    printf("\n");
	}//Fin filas
	printf("\n");
	
	
//--------------------------------------------------- Matriz 2
	printf("Ingrese la cantidad de puntos:");
	scanf("%d", &columnas2);
	puts("Introduzca un numero en la posicion");
//------------------------------Llena la matriz
	for(i=1; i<=3; i++){ //Filas
	    for(j=1; j<=columnas2; j++){//Columnas
	        printf("[%d,%d]: ", i,j);
	        scanf("%d", &matriz2[i][j]);
	    }//Fin Columnas
	}//Fin Filas
	printf("\n");
//-----------------------------Imprime la matriz
	for(i=1; i<=3; i++){
	    for(j=1; j<=columnas2; j++){
	        printf("[%d]", matriz2[i][j]);
	    }// Fin columnas
	    printf("\n");
	}//Fin filas
	printf("\n");

	
//-----------------------------Multiplicación
	puts("Resultado de la multiplicación:");
	for (i = 1; i <= 3; i++) {//se itera a través de cada fila de matriz1
		for (j = 1; j <=columnas2; j++) {//se itera a través de cada columna de matriz2
			suma = 0;//es donde se almacenará el valor final
            for (k = 1; k <=3;k++) {
				suma += matriz1[i][k] * matriz2[k][j];//se acumula en suma
            }
            matrizRes[i][j] = suma;
            printf("[%d]", matrizRes[i][j]);
        }
        printf("\n");
    }
    puts("\n");
    
	
//-----------------------------Grafica
	vredimensiona(200, 200);
  	linea(0, 0, 100, 100);
  	color(AZUL);
  	
  	system("Pause");
	return 0;
	
}
