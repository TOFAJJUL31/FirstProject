#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        char w[a][b + 1];  // +1 for the null terminator

        // Reading the grid of moves
        for (int i = 0; i < a; i++) {
            scanf("%s", w[i]);
        }

        int x = 0, y = 0;  // Starting positions
        int count = 0;  // Count of movements

        // Loop through the grid
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (w[i][j] == 'U') {
                    x++;  // Move up increases the y-axis position
                    count++;
                } else if (w[i][j] == 'D') {
                    x--;  // Move down decreases the y-axis position
                    count++;
                } else if (w[i][j] == 'R') {
                    y++;  // Move right increases the x-axis position
                    count++;
                } else if (w[i][j] == 'L') {
                    y--;  // Move left decreases the x-axis position
                    count++;
                }
                // '?' is ignored, no movement
            }
        }

        printf("%d\n", count);
    }

    return 0;
}