#include <stdio.h>

int main() {
    int row, col,n;
    printf("Enter n: ");
    scanf("%d",&n);
    

    for(row = 1; row <= n; row++) {
        // Print spaces
        for(col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // Print values
        if(row % 2 == 0) {  // Even row
            for(col = 1; col <= (row / 2); col++) {
                printf("%d ", col);
            }
            for(col = (row / 2); col >= 1; col--) {
                printf("%d ", col);
            }
        } else {  // Odd row
            for(col = 1; col <= (row / 2) + 1; col++) {
                printf("%d ", col);
            }
            for(col = (row / 2); col >= 1; col--) {
                printf("%d ", col);
            }
        }

        printf("\n");
    }

    return 0;
}
