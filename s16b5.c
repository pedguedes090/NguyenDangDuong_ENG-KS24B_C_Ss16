#include <stdio.h>
void updateElement(int *arr, int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        *(arr + position) = newValue;
    } else {
        printf("Vi tri %d khong hop le.\n", position);
    }
}
int main() {
    int array[] = {1, 2, 3, 4, 5};  
    int size =5);  
    int newValue = 10;
    int position = 2; 
    updateElement(array, size, newValue, position);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

