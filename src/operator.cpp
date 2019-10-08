#include "operator.h"

float calDistance(vec_1D a, vec_1D b)
{
    float distance = pow(pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2), 0.5);
    return distance;
}