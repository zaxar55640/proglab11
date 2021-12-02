#include <stdio.h>
#include "123.h"

int main() {
    struct Parallelogram p;
    printf("Enter first vector's coordinates:");
    scanf("%lf %lf", &p.vector1.x, &p.vector1.y);
    printf("Enter second vector's coordinates:");
    scanf("%lf %lf", &p.vector2.x, &p.vector2.y);
    printf("Perimeter:%lf\nArea:%lf\n", perimeter(&p), area(&p));
    return 0;
}