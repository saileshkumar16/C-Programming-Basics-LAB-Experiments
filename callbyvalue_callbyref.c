#include <stdio.h>
#include<stdlib.h>

int temp;
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

}
void swapByReference(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;

}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping the values are: num1 = %d, num2 = %d\n", num1, num2);

    swapByValue(num1, num2);
    printf("Values obtained after call by value: num1 = %d, num2 = %d\n", num1, num2);

    swapByReference(&num1, &num2);
    printf("Values obtained after call by reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
