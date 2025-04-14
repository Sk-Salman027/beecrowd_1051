#include <stdio.h>

int main()
{
    // varable declaration
    double salaray, taxes;
    // take input
    scanf("%lf", &salaray);
    if (salaray >= 0.00 && salaray <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (salaray > 2000.00 && salaray <= 3000.00)
    {
        taxes = (salaray - 2000.00) * (8 / 100.00);
        printf("R$ %.2lf\n", taxes);
    }
    else if (salaray > 3000.00 && salaray <= 4500.00)
    {
        taxes = ((3000.00 - 2000.00) * (8 / 100.00)) + ((salaray - 3000.00) * (18 / 100.00));
        printf("R$ %.2lf\n", taxes);
    }
    else if (salaray > 4500.00)
    {
        taxes = ((3000.00 - 2000.00) * (8 / 100.00)) + ((4500.00 - 3000.00) * (18 / 100.00)) + ((salaray - 4500.00) * (28 / 100.00));
        printf("R$ %.2lf\n", taxes);
    }

    return 0;
}