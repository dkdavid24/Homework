#include <stdio.h>

int addFunc(int, int);

int main() {
    int a, b;
    scanf("%i%i", &a, &b);
    printf("%i", addFunc(a, b));
    return 0;
}

int addFunc(int a, int b) {
    return a + b;
}
