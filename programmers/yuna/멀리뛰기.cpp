#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long dp[100001] = { 0 };
long long solution(int n) {
    long long answer = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1234567;
    }
    answer = dp[n];
    return answer;
}