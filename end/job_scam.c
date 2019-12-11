#include <stdio.h>
void main() {
    int i, j, c, n, d, p, s, profit = 0;
    printf("Enter the number of jobs \n");
    scanf("%d", &n);
    printf("Enter the number of deadlines \n");
    scanf("%d", &d);
    int types[d], max[d], seq[d];
    for (i = 1; i <= d; i++) max[i] = 0;
    for (i = 0; i < n; i++) {
        printf("Enter the deadline of the %dth job \n", i + 1);
        scanf("%d", &c);
        printf("Enter the profit of the job \n");
        scanf("%d", &p);
        s = i;
        if (max[c] < p) {
            max[c] = p;
            seq[c] = i + 1;
        }
    }
    for (i = 1; i <= d; i++) {
        profit += max[i];
        printf("%d -> ", seq[i]);
    }
    printf("Total profit %d", profit);
}