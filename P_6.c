// count the total set bits in a number from 1 to n
#include <stdio.h>

int countSetBits(int n)
{
    int count = 0;
    while (n){
        n = n & (n - 1);
        count++;
    }
    return count;
}

int totalSetBits(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++){
        count += countSetBits(i);
    }
    return count;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Total set bits from 1 to %d: %d\n", n, totalSetBits(n));
    return 0;
}