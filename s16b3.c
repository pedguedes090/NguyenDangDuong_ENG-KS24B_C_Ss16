#include <stdio.h>
void sum(int *x, int *y, int *result) {
    *result = *x + *y;
}
int main() {
    int a = 15;
    int b = 20;  
    int result;
    sum(&a, &b, &result);
    printf("Tong cua %d va %d la: %d\n", a, b, result);
}

