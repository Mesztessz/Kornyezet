#include <stdio.h>

int Sum(int num1, int num2);

int main() {
    int x, y;
    printf("x = "); scanf("%d", &x);
    printf("y = "); scanf("%d", &y);
    printf("%d", Sum(x, y));
    return 0;
}

int Sum(int num1, int num2){
    return num1 + num2;
}
