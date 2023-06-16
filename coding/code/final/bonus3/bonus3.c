#include <stdio.h>

#define MAX 2000000000

long long int a[64]; // Stores powers of 2

long long int search(long long int x) {
    long long int l, r, mid, cal, guess, ans = 9000000000000000000;

    for (int i = 0; i < 64; i++) {
        if (x == a[i] - 1) { // Check if x is one less than a power of 2
            if (ans > a[i])
                ans = a[i];
        }
        if (a[i] > x)
            break;

        l = 0;
        r = MAX;

        while (r > l) { // Perform binary search
            mid = (r + l) / 2;

            if (mid % 2 == 0)
                cal = mid - 1;
            else
                cal = mid;

            guess = (a[i] - 1) + (cal - 1) / 2;

            if (guess * cal == x) { // Found a match
                if (ans > a[i] * cal)
                    ans = a[i] * cal;
                break;
            }

            if (guess > x / cal)
                r = mid - 1;
            else
                l = mid + 1;
        }
    }

    if (ans == 9000000000000000000)
        return -1;
    else
        return ans;
}

int main() {
    int t;
    long long int n;

    scanf("%d", &t);
    a[0] = 1;

    for (int i = 1; i < 64; i++)
        a[i] = a[i - 1] * 2; // Generate powers of 2

    while (t--) {
        scanf("%lld", &n);
        printf("%lld\n", search(n)); // Call the search function and print the result
    }

    return 0;
}
