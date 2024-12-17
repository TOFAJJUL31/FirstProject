#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t); // Number of test cases

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m); // Number of words and maximum length of the first strip

        int totalLength = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            char word[11]; // Words have a maximum length of 10 + 1 for '\0'
            scanf("%s", word);

            int wordLength = strlen(word);
            if (totalLength + wordLength <= m) {
                totalLength += wordLength;
                count++;
            } else {
                // If adding the next word exceeds the limit, stop
                break;
            }
        }

        printf("%d\n", count); // Output the result for this test case

        // Consume remaining input for the current test case
        for (int i = count; i < n; i++) {
            char dummy[11];
            scanf("%s", dummy);
        }
    }

    return 0;
}
