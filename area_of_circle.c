#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main()
{
    float ray, circle_area;
    printf("what the ray of circle? ");
    scanf("%f", &ray);
    circle_area = PI * pow(ray,2);
    printf("%f", circle_area);
    return 0;
}