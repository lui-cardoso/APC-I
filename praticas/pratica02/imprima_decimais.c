#include <stdio.h>

int main() {

    double decimal1;
    float decimal2;

    decimal1 = 3.1415926;
    decimal2 = 3.14f;

    printf("%lf %0.2f\n", decimal1, decimal2);

    return 0;
}