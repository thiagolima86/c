#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int decimal, resto;
    printf("\n\033[01;32mConversão Decimal para Binario\033[01;37m");
    printf("\n\nQual número decimal você quer fatorar? ");
    scanf("%i", &decimal);
    
    printf("+---+-----------+-----+\n");
    printf("|\033[01;32m %1s \033[01;37m| %9i | ÷ 2 |\n", "#", decimal);

    int len = 1;
    int bin[32];
    while(decimal > 1)
    {
        resto = decimal % 2;
        bin[len] = resto;
        decimal = decimal / 2;
        if(decimal < 2)
        {
            printf("|\033[01;32m %1i \033[01;37m|\033[01;32m %9i \033[01;37m|     |\n", resto, decimal);
            bin[len+1] = decimal;
        }else{
            printf("|\033[01;32m %1i \033[01;37m| %9i | ÷ 2 |\n", resto, decimal);
        }
        len++;
    }
    printf("+---+-----------+-----+\n");    

    printf("Result: ");    
    for(int i = len; i >= 1; i--){
        printf("%i", bin[i]);
    }
    printf("\n\n"); 
    
    

    return 0;
}
