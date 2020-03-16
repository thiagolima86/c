#include <stdio.h>;
int main()
{
    int base, height, area;
    printf("\n\033[01;32mCalculadora de Área do Triangulo\033[01;37m");
    printf("\n\nQual a base? ");
    scanf("%i", &base);
    printf("Qual a altura? ");
    scanf("%i", &height);


    area = base*height/2;
    printf("a area do triangulo é: \033[01;31m%d\033[01;37m\n\n", area);
}