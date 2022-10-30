#include <stdio.h>
#include <math.h>

int main()
{
    // angka 1,  operator,  angka 2
    double nilaiA, nilaiB, nilaiC;
    int a, b, choice;
    char operator;

    // METHOD 1
    printf("please choose what type of data that you are going to use:\n 1.double\n 2.int (specifically for modulo)\n");
    scanf("%d", &choice);
    if (choice < 2)
    {
    scanf("%lf %c %lf", &nilaiA, &operator, & nilaiB);
    if (operator== '+')
    {
        printf("%.2lf %c %.2lf = %.2lf", nilaiA, operator, nilaiB, nilaiA + nilaiB);
    }
    else if (operator== '-')
    {
        printf("%.2lf %c %.2lf = %.2lf", nilaiA, operator, nilaiB, nilaiA - nilaiB);
    }
    else if (operator== '*')
    {
        printf("%.2lf %c %.2lf = %.2lf", nilaiA, operator, nilaiB, nilaiA * nilaiB);
    }
    else if (operator== '/')
    {
        printf("%.2lf %c %.2lf = %.2lf", nilaiA, operator, nilaiB, nilaiA / nilaiB);
    }
    else if (operator== '^')
    {
        nilaiC = pow(nilaiA, nilaiB);
            printf("%.2lf %c %.2lf = %.2lf\n", nilaiA, operator, nilaiB, nilaiC);
    }
    }
    else
    {
    scanf("%d %c %d", &a, &operator, &b);
        (operator== '%');
    {
        int c;
        c = a % b;
            printf("%d %c %d = %d", a, operator, b, c);
    }
    }
    
    
    // METHOD 2
    /*
    scanf("%lf %c %lf", &nilaiA, &operator, & nilaiB);

    switch (operator)
    {
    case '+':printf("%.2lf %c %.2lf = %.2lf",  nilaiA, operator, nilaiB, nilaiA+nilaiB);
        break;
    case '-':printf("%.2lf %c %.2lf = %.2lf",  nilaiA, operator, nilaiB, nilaiA-nilaiB);
        break;
    case '*':printf("%.2lf %c %.2lf = %.2lf",  nilaiA, operator, nilaiB, nilaiA*nilaiB);
        break;
    case '/':printf("%.2lf %c %.2lf = %.2lf",  nilaiA, operator, nilaiB, nilaiA/nilaiB);
        break;
    case '^':printf("%.2lf %c %.2lf = %.2lf", nilaiA, operator, nilaiB, nilaiA*nilaiA);
    }
    */
    return 0;
}