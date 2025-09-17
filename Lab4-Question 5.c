#include <stdio.h>

int main() {
    float total = 2.00; // assuming the  base cost for one scoop is 2.00//

    char sprinkles;
    printf("Do you want sprinkles? (Y/N): ");
    scanf(" %c", &sprinkles);  // space before %c to skip Enter key

    if (sprinkles == 'Y' || sprinkles == 'y') {
        total += 0.75;
        printf("Sprinkles added: $0.75\n");
    } else {
        printf("No sprinkles added.\n");
    }

    printf("Final Amount is : $%.2f\n", total);
    return 0;
}

