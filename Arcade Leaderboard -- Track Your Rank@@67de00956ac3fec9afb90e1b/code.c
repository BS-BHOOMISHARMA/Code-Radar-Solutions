#include <stdio.h>

// Function to determine ranks using a two-pointer approach
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int uniqueRank[n], rankCount = 0;

    // Create unique ranks
    uniqueRank[0] = ranked[0];
    rankCount = 1;
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) { // Store only unique scores
            uniqueRank[rankCount] = ranked[i];
            rankCount++;
        }
    }

    int pos = rankCount; // Start from the lowest rank

    // Assign rank for each player's score
    for (int i = 0; i < m; i++) {
        while (pos > 0 && player[i] >= uniqueRank[pos - 1]) {
            pos--; // Move up the leaderboard
        }
        result[i] = pos + 1; // Assign rank
    }
}

int main() {
    int n, m;
    
    // Read leaderboard size
    scanf("%d", &n);
    int ranked[n];
    
    // Read leaderboard scores
    for (int i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
    }

    // Read number of player scores
    scanf("%d", &m);
    int player[m], result[m];

    // Read player scores
    for (int i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }

    // Compute ranks
    trackPlayerRanks(ranked, n, player, m, result);

    // Print results
    for (int i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
