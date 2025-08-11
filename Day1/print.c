// #include<stdio.h>

// int main(){
//     int Age;
//     printf("Enter the Age of Person: ");
//     scanf("%d",&Age);
//     printf("Age of Person is: %d\n",Age);

//     char personName[50];

//     printf("Enter the Name of the Person: ");
//     scanf("%[^\n]",personName);
//     printf("Enter the Name of the Person is:%s\n",personName);
//     return 0;
// }


#include <stdio.h>

int main() {
    int Age;
    char personName[50];

    printf("Enter the Age of Person: ");
    scanf("%d", &Age);
    printf("Age of Person is: %d\n", Age);

    printf("Enter the Name of the Person: ");
    scanf(" %[^\n]", personName); // Space before % to skip leftover newline

    printf("Name of the Person is: %s\n", personName);

    return 0;
}
