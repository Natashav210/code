//do-while loop program prompithe user to enter the start and stop numbers 
//Name;FaiNatasha 
//Reg no; CT101/G/24504/24
#include <stdio.h>

int main() {
    int start, stop;

    // Prompt the user to enter the start number
    printf("Enter the start number: ");
    scanf("%d", &start);

    // Prompt the user to enter the stop number
    printf("Enter the stop number: ");
    scanf("%d", &stop);

    // Ensure the start number is less than or equal to the stop number
    if (start > stop) {
        printf("The start number should be less than or equal to the stop number.\n");
        return 1; // Exit the program with an error code
    }

    // Do-while loop to print numbers from start to stop
    int i = start;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= stop);

    return 0;
    }