#include <math.h>

#ifndef parallelogram
#define parallelogram

struct Parallelogram {
    struct point {
        double x, y;
    } vector1, vector2;
};

double perimeter(struct Parallelogram *x);

double area(struct Parallelogram *x);




#endif //ITMO_PROGRAMMING_TASKS_PARALLELOGRAM_H