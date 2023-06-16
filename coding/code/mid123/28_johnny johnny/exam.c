#include <stdio.h>
int n;
int k;
int a[21];
int count_ways(int k, int index) {
    // Base case: if target is 0, there is one way (i.e., picking no numbers)
    if (k == 0) {
        return 1;
    }
    // Base case: if no numbers are left and target is not 0, there are no ways
    if (index == n) {
        return 0;
    }
    // If the current number is greater than the target, skip it and try the remaining numbers
    if (a[index] > k) {
        return count_ways(k, index + 1);
    } //printf("%d", count_ways(n, k, a, index + 1));
   // printf("%d",count_ways(n, k - a[index], a, index + 1));

    // Recursively count ways by considering two cases: including the current number or excluding it
    return count_ways(k - a[index], index + 1) + count_ways(k, index + 1);
}

int main() {
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int ways = count_ways(k, 0);
    printf("%d\n", ways);
    return 0;
}

