#include <stdio.h>
#include <stdbool.h>

#define MAX_VALOR 10000 // Tamaño máximo

// Función que verifica si existe una pareja de elementos en el array que sume el valor de requiredSum
bool tieneSuma(int nums[], int size, int requiredSum) {
    bool complementos[MAX_VALOR] = { false }; // Inicializa un array del tipo booleano para almacenar los complementos

    for (int i = 0; i < size; i++) {
        int complemento = requiredSum - nums[i];
        // Si el complemento ya existe, encontramos una suma de parejas de numeros para requiredSum
        if (complemento >= 0 && complementos[complemento]) {
            return true;
        }
        // Marca el número actual como complemento disponible
        complementos[nums[i]] = true;
    }
    return false;
}

int main() {
    int nums1[] = {1, 4, 3, 9};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int requiredSum1 = 8;
    printf("%s\n", tieneSuma(nums1, size1, requiredSum1) ? "True" : "False");

    int nums2[] = {1, 2, 4, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int requiredSum2 = 8;
    printf("%s\n", tieneSuma(nums2, size2, requiredSum2) ? "True" : "False");

    return 0;
}
