#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - Calculate the minimum number of coins needed to make change
 * @cents: The amount in cents
 *
 * Return: The minimum number of coins
 */
int minCoins(int cents) {
int coins[] = {25, 10, 5, 2, 1};
int coinCount, i;
for (i = 0; i < 5; i++) {
while (cents >= coins[i]) {
cents -= coins[i];
coinCount++;
}
}
return coinCount;
}

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 if successful, 1 for errors
 */
int main(int argc, char *argv[]) {
int cents;
if (argc != 2) {
printf("Error\n");
return 1;
}
cents = atoi(argv[1]);
if (cents < 0) {
printf("0\n");
} else {
int coinsRequired = minCoins(cents);
printf("%d\n", coinsRequired);
}
return 0;
}
