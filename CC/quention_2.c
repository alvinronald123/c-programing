#include <stdio.h>

#define PI 3.14159

float computeCircleArea(float radius) {
    return PI * radius * radius;
}

float computeCircleCircumference(float radius) {
    return 2 * PI * radius;
}

float computeCylinderVolume(float radius, float height) {
    return PI * radius * radius * height;
}

int main() {
    float radius;
    float height;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    
    float circleArea = computeCircleArea(radius);
    float circleCircumference = computeCircleCircumference(radius);
    float cylinderVolume = computeCylinderVolume(radius, height);
    
    printf("Circle Area: %.2f\n", circleArea);
    printf("Circle Circumference: %.2f\n", circleCircumference);
    printf("Cylinder Volume: %.2f\n", cylinderVolume);
    
    return 0;
}

