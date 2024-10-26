#include <stdio.h>
#include <stdbool.h>

// Función que verifica si existe una pareja de elementos en el array que sume el valor de requiredSum
bool tieneSuma(int nums[], int size, int requiredSum)//variables recibidas desde el main, funcion del
                                                     //tipo bool ya que devuelve dos y solo dos respuestas

 {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {        //recorremos el array
            if (nums[i] + nums[j] == requiredSum) {//si la variable nums i sumando con nums en la posicion j es
                                                   //igual al numero ingresado, en este caso 8, devuelve true
                return true;
            }
        }
    }
    return false;
}

int main() {
    int nums1[] = {1, 4, 3, 9};//array con los valores dados en el enunciado
    int size1 = sizeof(nums1) / sizeof(nums1[0]); //creamos la variable con la division
    int requiredSum1 = 8; //numero ingresado para el proceso
    printf("%s\n", tieneSuma(nums1, size1, requiredSum1) ? "True" : "False");//mostramos por pantalla

    int nums2[] = {1, 2, 4, 4};//segundo arrray
    int size2 = sizeof(nums2) / sizeof(nums2[0]);//mismo linea 18
    int requiredSum2 = 8;//mismo linea 19
    printf("%s\n", tieneSuma(nums2, size2, requiredSum2) ? "True" : "False");//por pantalla

    return 0;
}
