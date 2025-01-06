// count the number of bit to be flipped to convert A to B
#include <stdio.h>
int countBits(int a, int b)
{
    int count = 0;
    int xor = a ^ b;
    while (xor){
        xor = xor & (xor - 1);
        count++;
    }
    return count;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Number of bits to be flipped: %d\n", countBits(a, b));
    return 0;
}