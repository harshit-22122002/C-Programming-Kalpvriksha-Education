#include <stdio.h>

int main() {
    int marks[5] = {90, 85, 78, 88, 76};

    printf("Marks of students:\n");

    for(int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i+1, marks[i]);
    }

    return 0;
}
