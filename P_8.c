// divide two integer without using multiplication, division and mod operator

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


int divide(int dividend, int divisor)
{
    if (dividend == 0){
        return 0;
    }
    if (divisor == 0){
        return INT_MAX;
    }
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;  // ^ is used for XOR operation
    dividend = abs(dividend);  // abs() is used to get the absolute value of a number, it is defined in stdlib.hS
    divisor = abs(divisor);
    int quotient = 0;
    while (dividend >= divisor){
        dividend -= divisor;
        quotient++;
    }
    return sign * quotient;
}

int main()
{
    int dividend, divisor;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);
    printf("Quotient: %d\n", divide(dividend, divisor));
    return 0;
}