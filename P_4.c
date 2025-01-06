// find the position of the only set bit

#include <stdio.h>

int findPosition(int n)
{
    if (n && !(n & (n - 1))){
        int pos = 0;
        while (n){
            n = n >> 1;
            pos++;
        }
        return pos;
    }
    else{
        return -1;
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int pos = findPosition(n);
    if (pos == -1){
        printf("More than one bit is set\n");
    }
    else{
        printf("Position of the only set bit: %d\n", pos);
    }
    return 0;
}