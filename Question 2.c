#include <stdio.h>
int main() {
    int sPrice = 8;
    int amount;
    printf("How many small pizza's you want?\n");
    scanf("%d",& amount);
    if(amount==1){
        printf("Your total is $%d", sPrice);
    }else if(amount>1){
        printf("Check out our multi pizza deals");
    }
    return 0;
}
