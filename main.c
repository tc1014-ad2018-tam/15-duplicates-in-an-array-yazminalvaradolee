/*
 * Programa para saber cuantos numeros dependiendo de la serie y la cantidad que pongas
 * te ayuda a definir cuantos numeros en total se repiten dependiendo de las variables
 *
 * Autora: Yasmin Alvarado Lee
 * Fecha: 15 de octubre del 2018
 * correo: yazminalvlee@gmail.com
 */
#include <stdio.h>
#include <stdlib.h>

// 1º FUNCION
int Compare (const void * a, const void * b) {
    return (*(int *) a - *(int *) b);
}
//VARIABLES
int main() {
    int count;
    int n;
    int dup = 0;

    //NUMERO DE VALORES PARA SABER CUANTOS NUMEROS PONDREMOS
    printf("Escribe el numero de valores que quieras sacar: ");
    scanf("%d", &n);

    // LA CANTIDAD DE NUMEROS QUE PONDREMOS EN LA SECUENCIA
    int numbers[n];

    //OPERACIONES
    for(int i = 0; i < n; i++){
        printf("%d:", i+1);
        scanf("%d", &numbers[i]);
    }
    //FUNCION PARA CONTAR LOS NUMEROS Y SABER LAS VARIABLES DUPLICADAS
    qsort(numbers, n, sizeof(int), Compare);
    //Regla
    for(int i = 0; i < n; i+=count+1){
        count = 0;
        for(int j = i + 1; j < n; j++){
            if(numbers[i] == numbers[j]){
                count++;
            }
        }
        if(count > 0){
            dup++;
        }
    }
//EL PROGRAMA LANZA EL RESULTADO AL USUARIO DEPENDIENDO DE CUANTOS NUMEROS SE REPITIERON EN LA SECUENCIA
    printf("Numeros repetidos: %d.", dup);

    return 0;
}
