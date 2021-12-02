#include <math.h>
#include "123.h"

double perimeter(struct Parallelogram *x) {
    return 2 * (sqrt(pow(x->vector1.x, 2) + pow(x->vector1.y, 2)) +
                sqrt(pow(x->vector2.x, 2) + pow(x->vector2.y, 2)));
}

double area(struct Parallelogram *x) {
    double len1 = sqrt(pow(x->vector1.x, 2) + pow(x->vector1.y, 2)), len2 = sqrt(
            pow(x->vector2.x, 2) + pow(x->vector2.y, 2));
    double angle = acos((x->vector1.x * x->vector2.x + x->vector1.y * x->vector2.y) /
                    (len1 * len2));
    return len1*len2*sin(angle);
};
