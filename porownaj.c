#include <stdio.h>

int main() {
    int x = 5, y = 8;
    if (x > y)
        printf("%d jest większe niż %d\n", x, y);
    else if (x < y)
        printf("%d jest większe niż %d\n", y, x);
    else
        printf("Liczby są równe\n");
}
