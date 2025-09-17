#include <stdio.h>
int main() {
    int size;
    printf("choose the size of pizza by selecting the corresponding number:\n1. Small\n2. Medium\n3. Large\n");
    scanf("%d",& size);
    while (size > 3 || size < 1){
        printf("Invalid size, choose again.\n");
        scanf("%d",& size);
    }
    if(size == 1){
        printf("You have chosen a small pizza");
    }else if(size == 2){
        printf("You have chosen a medium pizza");
    }else if(size == 3){
        printf("You have chosen a large pizza");
    }
    
    return 0;
}
