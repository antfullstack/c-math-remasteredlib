#include <stdio.h>
#include <math.h>

int square(float length) {
    return length * length;
}

int circle(float radius) {
    return 3.14 * (radius *  radius);
}

int rectangle(float width, float height) {
    return width * height;
}

int triangle(float base, float height) {
    return rectangle(base, height) / 2; 
}