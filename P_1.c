// count set bits in an integer

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
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Set bits: %d\n", countSetBits(n));
    return 0;
}