#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, delta, x1, x2;
    puts("\nPonha os 3 valores da equação de 2º grau");
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Impossivel calcular");
        return 0;
    }
    
    delta = (b * b) - 4 * a * c;

    if (delta < 0) {
        printf("√%f", delta);
        return 0;
    }

    x1 = (-b + sqrt(delta)) / 2*a;
    x2 = (-b - sqrt(delta)) / 2*a;
    puts("--------------");
    printf("R1 = %f", x1);
    printf("\nR2 = %f", x2);


    return 0;
}