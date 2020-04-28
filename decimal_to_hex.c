#include <stdio.h>
#include <math.h>


int main()
{
    int decimal, resto;
    printf("\n\033[01;32mConversão Decimal para Hexadecimal\033[01;37m");
    printf("\n\nQual número decimal você quer fatorar? ");
    scanf("%i", &decimal);
    
    printf("+---+-----------+-----+\n");
    printf("|\033[01;32m %2s \033[01;37m| %9i | ÷ 16 |\n", "#", decimal);

    int len = 1;
    int bin[32];
    while(decimal > 16)
    {
        resto = decimal % 16;
        bin[len] = resto;
        decimal = decimal / 16;
        if(decimal < 16)
        {
            printf("|\033[01;32m %2x \033[01;37m|\033[01;32m %9i \033[01;37m|     |\n", resto, decimal);
            bin[len+1] = decimal;
        }else{
            printf("|\033[01;32m %2x \033[01;37m| %9x | ÷ 16 |\n", resto, decimal);
        }
        len++;
    }
    printf("+---+-----------+-----+\n");    

    printf("Result: ");    
    for(int i = len; i >= 1; i--){
        printf("%x", bin[i]);
    }
    printf("\n\n"); 
    
    

    return 0;
}
