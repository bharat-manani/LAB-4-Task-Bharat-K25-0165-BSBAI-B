#include <stdio.h>

int main() {
    // Declare the  two variables
    int num1;
    int num2;

    // Now Take values of both integers//
    printf("Enter number of scoops that you need: ");
    scanf("%d", &num1);

    printf("Do you want waffle cone? (No = 0, Yes = 1): ");
    scanf("%d", &num2);

    // Use if condition to check for 3 scoops and waffle cone
    if (num1 == 3 && num2 == 1) {
        printf("You get a free topping!\n");
    } else {
        printf("No free topping.\n");
    }

    return 0;
}

