#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;

    printf("---------------------------------\n");
    printf("     ONLINE SHOPPING SYSTEM\n");
    printf("---------------------------------\n");

    printf("\nAvailable Products:\n");
    printf("1. Mobile Phone  - Rs.15000\n");
    printf("2. Laptop        - Rs.45000\n");
    printf("3. Headphones    - Rs.2000\n");
    printf("4. Smart Watch   - Rs.3000\n");

    printf("\nEnter product choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    switch(choice) {
        case 1:
            total = qty * 15000;
            break;
        case 2:
            total = qty * 45000;
            break;
        case 3:
            total = qty * 2000;
            break;
        case 4:
            total = qty * 3000;
            break;
        default:
            printf("Invalid choice\n");
            return 0;
    }

    printf("\n-------------------------------\n");
    printf("Order Summary\n");
    printf("Quantity : %d\n", qty);
    printf("Total Bill Amount : Rs. %.2f\n", total);
    printf("---------------------------------\n");
    printf("Thank you for shopping!\n");

    return 0;
}