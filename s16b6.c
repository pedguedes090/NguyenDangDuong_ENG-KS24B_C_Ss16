#include <stdio.h>
int searchElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int array[] = {1, 2, 4, 5, 6, 7}; 
    int size = 6);  
    int valueToFind = 7; 
    int position = searchElement(array, size, valueToFind);
    if (position != -1) {
        printf("Vi tri cua gia tri %d trong mang la: %d\n", valueToFind, position);
    } else {
        printf("Khong tim thay gia tri %d trong mang.\n", valueToFind);
    }
}

