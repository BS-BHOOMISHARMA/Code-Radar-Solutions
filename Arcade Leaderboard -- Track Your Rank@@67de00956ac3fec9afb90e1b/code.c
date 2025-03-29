#include <stdio.h>

int main() {
    int n, m;

    // Read leaderboard size
    scanf("%d", &n);
    int r[n]; // Define array with size n

    // Read leaderboard scores
    for (int i = 0; i < n; i++)
        scanf("%d", &r[i]);

    // Read number of games played
    scanf("%d", &m);
    int p[m]; // Define array with size m

    // Read player scores
    for (int i = 0; i < m; i++)
        scanf("%d", &p[i]);

    int rs[m]; // Array to store results

    // Process leaderboard ranking
    int rank = 1, j = 0;
    for (int i = 1; i < n; i++) {
        if (r[i] != r[i - 1]) 
            rank++;
    }

    int pos = rank; // Start from lowest rank

    // Find ranks for player scores
    for (int i = 0; i < m; i++) {
        while (j < n && p[i] >= r[j]) 
            j++;
        rs[i] = j + 1;
    }

    // Print the results
    for (int i = 0; i < m; i++)
        printf("%d\n", rs[i]);

    return 0;
}

