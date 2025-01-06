// find the two non-repeating elements in an array of repeating elements
#include <stdio.h>
void findNonRepeating(int arr[], int size)
{
    int xor = 0;
    int x = 0, y = 0;

    for (int i = 0; i < size; i++){
        xor = xor ^ arr[i];
    }
    int setBit = xor & ~(xor - 1);
    for (int i = 0; i < size; i++){
        if (arr[i] & setBit){
            x = x ^ arr[i];
        }
        else{
            y = y ^ arr[i];
        } 
        
    }
    printf("Non-repeating elements are %d and %d\n", x, y);
}
int main()
{
    int arr[] = {2, 3, 7, 9, 11, 2, 3, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    findNonRepeating(arr, size);
    return 0;
}