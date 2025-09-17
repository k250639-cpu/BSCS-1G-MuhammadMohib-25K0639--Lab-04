#include <stdio.h>

int main() {
    int size, amount, crust, time, mode;
    float total = 0;
    char cheese, sID;

    printf("Welcome to The Pizza Shop!\nTell me about your order.\n");
    printf("We have:\n1. Small Pizza $5\n2. Medium Pizza $8\n3. Large Pizza $11\n");

    printf("What size do you want?\n");
    scanf("%d", &size);
    while (size > 3 || size < 1) {
        printf("Invalid size, try again \n");
        scanf("%d", &size);
    }

    printf("How many pizzas do you want (1-3)?\n");
    scanf("%d", &amount);
    while (amount > 3 || amount < 1) {
        printf("Invalid amount, try again \n");
        scanf("%d", &amount);
    }

    if (size == 1) {
        total = 5 * amount;
    } else if (size == 2) {
        total = 8 * amount;
    } else if (size == 3) {
        total = 11 * amount;
    }

    printf("What type of crust do you want (1-3)?\n1. Regular Crust $0\n2. Thin Crust $1\n3. Stuffed Crust $2\n");
    scanf("%d", &crust);
    while (crust > 3 || crust < 1) {
        printf("Invalid type of crust, try again \n");
        scanf("%d", &crust);
    }

    if (crust == 2) {
        total += 1;
    } else if (crust == 3) {
        total += 2;
    }

    if (crust == 3 && amount == 3) {
        printf("You get free Garlic Bread!\n");
    }

    printf("Do you want cheese on the pizza? (Y/N)\n");
    scanf(" %c", &cheese);
    if (cheese == 'y' || cheese == 'Y') {
        total += 1.5;
    }

    printf("What is the current time in 24-hour format?\n");
    scanf("%d", &time);
    if (time >= 11 && time <= 14) {
        total *= 0.9; // 
    }

    printf("Do you have a student ID? (Y/N)\n");
    scanf(" %c", &sID);
    if (sID == 'y' || sID == 'Y') {
        total -= 2;
    }

    printf("Is it delivery or pickup?\n1. Pickup\n2. Delivery\n");
    scanf("%d", &mode);
    while (mode > 2 || mode < 1) {
        printf("Invalid way to receive pizza, try again \n");
        scanf("%d", &mode);
    }
    if (mode == 2) {
        total += 3;
    }
    printf("<-----------Receipt----------->\n");
    if (crust == 3 && amount == 3) {
        printf("FREE Item   :   Garlic Bread\n");
    }
    printf("---------------------------\n");
    printf("TOTAL Price   :     $%.2f\n", total);
    printf("---------------------------");
    return 0;
}
