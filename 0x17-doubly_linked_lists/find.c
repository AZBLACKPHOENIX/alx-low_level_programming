#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return reversed == original;
}

int main() {
    int largestPalindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            if (isPalindrome(product) && product > largestPalindrome) {
                largestPalindrome = product;
            }
        }
    }

    // Save the result to a file
    FILE *file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", largestPalindrome);
        fclose(file);
    }

    return 0;
}

