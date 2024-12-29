#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char op;
    int tab, ger;

    printf("Gerador de Tabuada  \nQual operacao voce que? ");
    scanf("%c", &op);
    printf("Qual tabuada voce que gerar?");
    scanf("%d", &tab);
    printf("\nSegue a tabuada do %d:\n", tab);

    switch (op)
    {
    case '*':
        for (ger = 0; ger <= 10; ger++)
        {

            int calc = tab * ger;
            printf("%d*%d=  %d \n", tab, ger, calc);
        }

        break;

    case '+':
        for (ger = 0; ger <= 10; ger++)
        {
            int calc = tab + ger;
            printf("%d+%d= %d \n", tab, ger, calc);
        }
        break;

    case '-':
        for (ger = 0; ger <= 10; ger++)
        {
            int calc = tab - ger;
            printf("%d-%d= %d \n", tab, ger, calc);
        }
        break;
    case '/':
        for (ger = 0; ger <= 10; ger++)
        {
            int calc = tab / ger;
            printf("%d/%d= %d \n", tab, ger, calc);
        }
        break;

    default:
        break;
    }

    return 0;
}