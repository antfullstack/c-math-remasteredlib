#include <stdio.h>
#include <math.h>

int sphere(float radius) {
    float PI = 3.14;
    float area = 4 * PI * radius * radius;
    return area;
}

int pyramid(float l, float w, float h) {
    float area = l * w + l * sqrt(powf(w/2,2) + powf(h,2)) + w * sqrt(pow(l/2,2) * pow(h,2));
    return area;
}

int cylinder(float r, float h) {
    float PI = 3.14;
    float area = 2 * PI * r * h + 2 * PI * (r * r);
    return area;
}

int cube(float l) {
    float area =  powf(l,3);
    return area;
} 

