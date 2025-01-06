// power set

#include <stdio.h>

void powerSet(int arr[], int n)
{
    int pow_set_size = 1 << n;
    for (int counter = 0; counter < pow_set_size; counter++){
        for (int j = 0; j < n; j++){
            if (counter & (1 << j)){
                printf("%d ", arr[j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    powerSet(arr, n);
    return 0;
}