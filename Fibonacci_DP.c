// C program to calculate Fibonacci series using Dynamic Programming
#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    long long dp[n + 1];

    dp[0] = 0;

    if (n > 0)
        dp[1] = 1;

    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    printf("Fibonacci Series: ");

    for (int i = 0; i <= n; i++)
        printf("%lld ", dp[i]);

    printf("\n");

    return 0;
}