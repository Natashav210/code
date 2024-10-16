//while loop program prompting the user to enter the start and stop numbers
// Name: Faith Natasha 
//Reg no:CT101/G/24504/24

#include <stdio.h>

int main() {
    int start, stop;

    // Prompt the user to enter the start number
    printf("Enter the start number: ");
    scanf("%d", &start);

    // Prompt the user to enter the stop number
    printf("Enter the stop number: ");
    scanf("%d", &stop);

    // The start number should be less than or equal to the stop number
    if (start > stop) {
        printf("The start number should be less than or equal to the stop number.\n");
        return 1; // Exit the program with an error code
    }

    // print numbers from start to stop
    while (start <= stop) {
        printf("%d\n", start);
        start++;
    }

    return 0;
}