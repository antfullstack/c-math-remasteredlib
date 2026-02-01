#include <stdio.h>
#include <math.h>

//2d areas module 
#include "2d_areas.h"

float square(float length) {
    return length * length;
}

float circle(float radius) {
    return 3.14 * (radius *  radius);
}

float rectangle(float width, float height) {
    return width * height;
}

float triangle(float base, float height) {
    return rectangle(base, height) / 2; 
}
