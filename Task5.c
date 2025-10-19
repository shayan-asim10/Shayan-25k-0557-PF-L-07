#include <stdio.h>

int main(){
    int budget,sum=0;
    int price[] = {100, 200, 300, 400, 500};
    int n = sizeof(price)/sizeof(price[0]);
    printf("Enter your budget: ");
    scanf("%d", &budget);
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (price[i] + price[j] == budget) {
                printf("Found: price[%d]=%d + price[%d]=%d = %d\n", i+1, price[i], j+1, price[j], budget);
                return 0;
            }
        }
    }
    printf("No two prices sum to %d\n", budget);
    return 1;
}