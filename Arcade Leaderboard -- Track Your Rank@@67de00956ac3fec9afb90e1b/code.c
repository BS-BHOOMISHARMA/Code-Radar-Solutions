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
