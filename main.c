#include <stdio.h>
#include <math.h>
void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}
int main()
{
    int i, N=10;
    long long int calc[N], x, ret;
    char resp, car;

    printf("***************************************************\n");
    printf("         Calculadora de tabuada FTCoder            \n");
    printf("***************************************************\n");

    do
    {
        printf("Insira o valor que deseja calcular: ");
        ret = scanf("%lli", &x);

        while (ret == 0)
        {
            printf("Dado(s) Invalidos. Tente novamente!: ");
            do
            {
                car = getchar();

            }while (car != '\n');

            ret = scanf("%lli", &x);
        }

        if (x < -1000000000000000 || x > 1000000000000000)
        {
            printf("O valor excede os limites da calculadora.");
        }
        else
        {
            for (i = 1; i <= 10; i++)
            {
                calc[i] = x * i;
            }
            for (i = 1; i <= 10; i++)
            {
                printf("%lli x %i = %lli\n", x, i, calc[i]);
            }
        }

        printf("\n");
        printf("Deseja continuar? S/N? ");
        limpar_entrada();
        scanf("%c", &resp);
        printf("\n");

    } while (resp == 's' || resp == 'S');

    return 0;
}
