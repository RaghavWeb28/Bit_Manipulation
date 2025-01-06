// program to find whether a number is a power of two
#include <stdio.h>
int isPowerOfTwo(int n)
{
    return (n && !(n & (n - 1)));
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPowerOfTwo(n)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}