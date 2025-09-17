#include <stdio.h>

int main() {
    int flavor, scoops, coneChoice, topping, day, age, paymentChoice;
    float total = 0.0;

    // 1. Flavor
    printf("Choose the ice-cream flavor:\n1. Vanilla\n2. Chocolate\n3. Strawberry\nYour choice: ");
    scanf("%d", &flavor);

    // 2. Scoops
    printf("How many scoops do you want (1, 2, or 3)? ");
    scanf("%d", &scoops);

    if (scoops == 1) total += 2.00;
    else if (scoops == 2) total += 3.50;
    else if (scoops == 3) total += 4.50;
    else {
        printf("Invalid number of scoops!\n");
        return 0;
    }

    // 3. Cone type
    printf("Choose a Cone type:\n1. Regular (+$0.50)\n2. Waffle (+$1.00)\nYour choice: ");
    scanf("%d", &coneChoice);

    if (coneChoice == 1) total += 0.50;
    else if (coneChoice == 2) total += 1.00;
    else {
        printf("Invalid cone type!\n");
        return 0;
    }

    // 4. Free topping 
    printf("Do you want extra topping? (0 = No, 1 = Yes): ");
    scanf("%d", &topping);

    if (scoops == 3 && topping == 1) {
        printf("You get a free topping!\n");
    } else if (topping == 1) {
        total += 0.75; // example for topping cost
        printf("Topping added: $0.75\n");
    }

    // 5. Weekend discounts
    printf("Enter day number (1=Mon ... 7=Sun): ");
    scanf("%d", &day);

    if (day == 6 || day == 7) {
        printf("10%% weekend discount applied!\n");
        total *= 0.90;
    }

    // 6. Age discount
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 12) {
        printf("Child discount: -$1.00\n");
        total -= 1.00;
        if (total < 0) total = 0;
    }

    // 7. Payment method
    printf("Choose payment method:\n1. Card (+$0.50 fee)\n2. Cash (no fee)\nYour choice: ");
    scanf("%d", &paymentChoice);

    if (paymentChoice == 1) {
        total += 0.50;
        printf("Card fee added.\n");
    }

    // Final bill
    printf("\nFinal Total Amount: $%.2f\n", total);

    return 0;
}

