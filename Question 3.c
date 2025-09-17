#include <stdio.h>
int main() {
    int amount;
    printf("How many pizza's you want?(1-3)\n ");
    scanf("%d",& amount);
    while(amount>3 || amount<1){
        printf("Insufficent amount of pizza, please choose again from 1-3.\n");
        scanf("%d",& amount);
    }
    if(amount==1){
        printf("Your total is $8.");
    }else if(amount==2){
        printf("Your total is $15.");
    }else if(amount==3){
        printf("Your total is $21.");
    }
    return 0;
}
