// C program to solve the Coin Change problem using Greedy and Dynamic Programming approaches
#include <stdio.h>

int main() {

    // Available coins
    int coins[] = {1, 5, 10, 25};

    // Number of coins and required amount
    int n = 4, amount;

    // Take amount from user
    printf("Enter amount: ");
    scanf("%d", &amount);

    // -------- Greedy Method --------

    printf("Greedy: ");

    // Store the remaining amount
    int rem = amount;

    // Start checking from the largest coin
    for (int i = n - 1; i >= 0 && rem > 0; i--) {

        // Use the coin as many times as possible
        while (rem >= coins[i]) {

            // Print the selected coin
            printf("%d ", coins[i]);

            // Subtract coin value from remaining amount
            rem = rem - coins[i];
        }
    }

    printf("\n");

    // -------- Dynamic Programming --------

    // DP array to store minimum coins for each amount
    int dp[amount + 1];

    // 0 coins are needed to make amount 0
    dp[0] = 0;

    // Calculate minimum coins for every amount
    for (int i = 1; i <= amount; i++) {

        // Set a very large initial value
        dp[i] = 99999;

        // Check every available coin
        for (int j = 0; j < n; j++) {

            // Check if the coin can be used
            if (coins[j] <= i &&
                dp[i - coins[j]] + 1 < dp[i]) {

                // Update minimum number of coins
                dp[i] = dp[i - coins[j]] + 1;
            }
        }
    }

    // Display minimum number of coins
    printf("DP minimum coins: %d\n", dp[amount]);

    return 0;
}
