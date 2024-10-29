#include <stdio.h>

int replace(int num) {
    int result = 0;
    int place = 1;

    while (num > 0) {
        int digit = num % 10; 
        // Replace digits
        if (digit == 0) {
            digit = 1; // Replace 0 with 1
        } else if (digit == 1) {
            digit = 0; // Replace 1 with 0
        }
        result += digit * place; 
        num /= 10; 
        place *= 10; 
    }

    return result;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int newnum = replace(num);
    printf("newnum: %d\n", newnum);

    return 0;
}
