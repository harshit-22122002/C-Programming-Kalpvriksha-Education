#include <stdio.h>
int main() {
    int arr[5] = {12, 45, 2, 67, 33};
    int i, max = arr[0], min = arr[0];
    
    for(i = 1; i < 5; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Max = %d, Min = %d", max, min);
    return 0;
}
